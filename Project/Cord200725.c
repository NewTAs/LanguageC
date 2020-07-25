#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Declaration Node & UserInterface
struct InterfaceNode
{
    struct InterfaceNode *NextNode;
    char UserName[20];
    char UserPhoneNumber[12];
};

//Declaration Add Struct (Linked List)
int addInterface(struct InterfaceNode *BeforeNode, char Name[], char Phone[])
{
    if (BeforeNode == NULL)
    {
        return 2; //ERROR
    }
    
    struct InterfaceNode *newInterface = malloc(sizeof(struct InterfaceNode));
    if (newInterface == NULL)
    {
        return 2; //ERROR
    }
    
    newInterface->NextNode = BeforeNode->NextNode;
    strcpy(newInterface->UserName, Name);
    strcpy(newInterface->UserPhoneNumber, Phone);
    
    BeforeNode->NextNode = newInterface;
    
    return 1; //DONE
}

//Declaration Remove Struct (Linked List)
int removeInterface(struct InterfaceNode *TargetNode)
{
    if (TargetNode == NULL)
    {
        return 2; //ERROR
    }
    
    struct InterfaceNode *removeNode = TargetNode->NextNode;
    if (removeNode == NULL)
    {
        return 2; //ERROR
    }
    
    TargetNode->NextNode = removeNode->NextNode;
    
    free(removeNode);
    return 1; //DONE
}

//Declaration FindNode (Parameters:UserPhoneNumber)
struct InterfaceNode *findInterface(struct InterfaceNode *TargetNode, char Phone[])
{
    if (TargetNode == NULL)
    {
        return NULL; //ERROR
    }
    
    struct InterfaceNode *MoveVar = TargetNode->NextNode;
    while (MoveVar != NULL)
    {
        if (strcmp(MoveVar->UserPhoneNumber, Phone) == 0)
        {
            return MoveVar;
        }
        MoveVar = MoveVar->NextNode;
    }
    return NULL; //ERROR
}

//Declaration RemoveNode (Parameters:UserPhoneNumber)
struct InterfaceNode *removeNode(struct InterfaceNode *TargetNode, char Phone[])
{
    if (TargetNode == NULL)
    {
        return NULL; //ERROR
    }
    
    struct InterfaceNode *MoveVar = TargetNode->NextNode;
    while (MoveVar != NULL)
    {
        if (strcmp(MoveVar->UserPhoneNumber, Phone) == 0)
        {
            int Result = removeInterface(TargetNode);
            if (Result == 2)
            {
                printf("입력하신 연락처는 삭제되지 않았습니다.\n");
                return MoveVar;
            }
            else if (Result == 1)
            {
                printf("입력하신 연락처는 삭제되었습니다.\n");
                return MoveVar;
            }
            else
            {
                printf("입력하신 연락처는 삭제되지 않았습니다.\n");
                return MoveVar;
            }
        }
        MoveVar = MoveVar->NextNode;
    }
    return NULL; //ERROR
}


//Declaration Select Menu
void selectMenu()
{
    puts("(1) 연락처 추가");
    puts("(2) 연락처 찾기");
    puts("(3) 연락처 삭제");
    puts("(4) 연락처 전체보기");
    puts("(0) 종료\n");
}

//Program Intro Description
void Intro()
{
    puts("- - - - - - -  A Telephone Directory  - - - - - - -\n");
    
    puts("연락처의 이름과 전화번호를 저장할 수 있는 전화번호부입니다.");
    puts("현재 지원하는 기능은 다음과 같습니다.\n");
    
    selectMenu();
    
    puts("©2020.07. github.com/NewTAs");
    puts("Ver 1.01\n");
    
    puts("- - - - - - - - - - - - - - - - - - - - - - - - - -");
}

int main()
{
    //Declaration Basic Var
    struct InterfaceNode *HeadNode = malloc(sizeof(struct InterfaceNode));
    HeadNode->NextNode = NULL;
    struct InterfaceNode *VarNode;
    
    int BreakVar = 1, Result;
    int UserInputSelectMenu = 0;
    char Name[20], Phone[12];
    
    Intro();
    do
    {
        Result = 0;
        
        puts("\n사용할 기능을 선택해주세요.");
        selectMenu();
        scanf("%d", &UserInputSelectMenu);
        
        switch(UserInputSelectMenu)
        {
            case 1:
                puts("");
                puts("추가하실 연락처의 이름을 입력해주세요.");
                scanf("%s", Name);
                puts("\n연락처의 전화번호를 입력해주세요.");
                scanf("%s", Phone);
                
                Result = addInterface(HeadNode, Name, Phone);
                if (Result == 1)
                    puts("연락처 저장이 완료되었습니다.");
                else if (Result == 2)
                    puts("연락처 저장이 취소되었습니다.");
                else
                    puts("알 수 없는 오류가 발생했습니다.");
                    
            break;
            
            case 2:
                puts("");
                puts("찾으실 연락처의 전화번호를 입력해주세요.");
                scanf("%s", Phone);
                
                struct InterfaceNode *Found = findInterface(HeadNode, Phone);
                if (Found == NULL)
                    puts("\n찾으시는 연락처가 존재하지 않습니다.");
                else
                {
                    puts("\n찾으시는 연락처로 저장된 이름은 다음과 같습니다."); 
                    printf("%s\n", Found->UserName);
                }
            break;
            
            case 3:
                puts("");
                puts("삭제하실 연락처의 전화번호를 입력해주세요.");
                scanf("%s", Phone);
                
                struct InterfaceNode *Remove = removeNode(HeadNode, Phone);
                if (Remove == NULL)
                    puts("\n찾으시는 연락처가 존재하지 않습니다.");
            break;
            
            case 4:
                VarNode = HeadNode->NextNode;
                while (VarNode != NULL)
                {
                    printf("PRINT %s\n", VarNode->UserPhoneNumber);
                    VarNode = VarNode->NextNode;
                }
            break;
        }
    } while(BreakVar != 0);
    
    addInterface(HeadNode, "Name1", "01011111111");
    addInterface(HeadNode, "Name2", "01022222222");
    addInterface(HeadNode, "Name3", "01033333333");

    //Realization Malloc Free
    VarNode = HeadNode->NextNode;
    while (VarNode != NULL)
    {
        struct InterfaceNode *NextNode = VarNode->NextNode;
        free(VarNode);
        VarNode = NextNode;
    }
    free(HeadNode);
    
    return 0;
}

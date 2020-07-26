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

//Declaration Head Node
struct InterfaceNode *HeadNode;

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
void removeInterface(struct InterfaceNode *TargetNode)
{
    if (TargetNode == NULL)
    {
        return; //ERROR
    }
    
    free(TargetNode);
    TargetNode = NULL;
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
int removeNode(char Phone[])
{
    if (HeadNode == NULL)
    {
        return 2; //ERROR
    }
    
    struct InterfaceNode *MoveVar = HeadNode;
    
    if (strcmp(MoveVar->UserPhoneNumber, Phone) == 0)
    {
        HeadNode = MoveVar->NextNode;
        removeInterface(MoveVar);
        
        return 1; //DONE
    }
    
    while (MoveVar->NextNode != NULL)
    {
        if (strcmp(MoveVar->NextNode->UserPhoneNumber, Phone) == 0)
        {
            struct InterfaceNode *deleteInterface = MoveVar->NextNode;
            
            if (deleteInterface->NextNode != NULL)
            {
                MoveVar->NextNode = deleteInterface->NextNode;
            }
            else
            {
                MoveVar->NextNode = NULL;
            }
            removeInterface(deleteInterface);
            return 1; //DONE
        }
        MoveVar = MoveVar->NextNode;
    }
    return 2; //ERROR
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
    puts("Ver 1.02\n");
    
    puts("- - - - - - - - - - - - - - - - - - - - - - - - - -");
}

int main()
{
    //Declaration Basic Var
    HeadNode = malloc(sizeof(struct InterfaceNode));
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
            case 0:
                puts("");
                puts("- - - - - - -  A Telephone Directory  - - - - - - -\n");
                puts("프로그램이 종료됩니다.");
                puts("이용해주셔서 감사합니다.");
                BreakVar = 0;
            break;
            
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
                
                Result = removeNode(Phone);
                if (Result == 1)
                    puts("연락처 삭제가 완료되었습니다.");
                else if (Result == 2)
                    puts("연락처 삭제가 취소되었습니다.");
                else
                    puts("알 수 없는 오류가 발생했습니다.");
            break;
            
            case 4:
                VarNode = HeadNode->NextNode;
                while (VarNode != NULL)
                {
                    printf("PRINT %s\n", VarNode->UserPhoneNumber);
                    VarNode = VarNode->NextNode;
                }
            break;
            
            default:
                puts("");
                puts("잘못 입력하셨습니다. 다시 입력해주세요.");
            break;
        }
    } while(BreakVar != 0);

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

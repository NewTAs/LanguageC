#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Declaration Node & UserInterface
struct InterfaceNode
{
    struct InterfaceNode *NextNode;
    char UserName[20];
    int UserPhoneNumber;
};

//Declaration Add Struct (Linked List)
int addInterface(struct InterfaceNode *BeforeNode, char Name[], int Phone)
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
    newInterface->UserPhoneNumber = Phone;
    
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
struct InterfaceNode *findNode(struct InterfaceNode *GoalNode, int Phone)
{
    if (GoalNode == NULL)
    {
        return NULL; //ERROR
    }
    
    struct InterfaceNode *count = GoalNode->NextNode;
    while (count != NULL)
    {
        if (count->UserPhoneNumber == Phone)
        {
            return count;
        }
        count = count->NextNode;
    }
    return NULL; //ERROR
}

//Declaration RemoveNode (Parameters:UserPhoneNumber)
struct InterfaceNode *removeNode(struct InterfaceNode *GoalNode, int Phone)
{
    if (GoalNode == NULL)
    {
        return NULL; //ERROR
    }
    
    struct InterfaceNode *count = GoalNode->NextNode;
    while (count != NULL)
    {
        if (count->UserPhoneNumber == Phone)
        {
            int Result = removeInterface(GoalNode);
            if (Result == 2)
            {
                printf("입력하신 연락처는 삭제되지 않았습니다.\n");
            }
            else if (Result == 1)
            {
                printf("입력하신 연락처는 삭제되었습니다.\n");
            }
            else
            {
                printf("입력하신 연락처는 삭제되지 않았습니다.\n");
            }
        }
        count = count->NextNode;
    }
    return NULL; //ERROR
}

int main()
{
    //Declaration Var
    struct InterfaceNode *HeadNode = malloc(sizeof(struct InterfaceNode));
    HeadNode->NextNode = NULL;
    struct InterfaceNode *VarNode;
    
    addInterface(HeadNode, "Name1", 01011111111);
    addInterface(HeadNode, "Name2", 01022222222);
    addInterface(HeadNode, "Name3", 01033333333);
    
    struct InterfaceNode *Found = fineNode(HeadNode, 01011111111);
    printf("FIND %s\n\n", Found->UserName);
    
    VarNode = HeadNode->NextNode;
    while (VarNode != NULL)
    {
        printf("PRINT %d\n", VarNode->UserPhoneNumber);
        VarNode = VarNode->NextNode;
    }
    
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

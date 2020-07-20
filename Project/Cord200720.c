#define _CRT_SECURE_NO_WARNINGS
#define MaxMember 10

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Declaration Struct Basic
struct userInterfaceStruct {
    int IdNumber;
    char UserName[20];
    char UserPhoneNumber[11];
};

//Declaration Struct Function
struct userInterfaceStruct *userDatabaseInputB(int BIdNumber)
{
    struct userInterfaceStruct *userInterface = malloc(sizeof(struct userInterfaceStruct));
    char BUserName;
    char BUserPhoneNumber;
    
    scanf("%s", &BUserName);
    scanf("%s", &BUserPhoneNumber);
    
    userInterface->IdNumber = BIdNumber;
    strcpy(&userInterface->UserName, BUserName);
    strcpy(&userInterface->UserPhoneNumber, BUserPhoneNumber);
    
    return userInterface;
}

//Declaration Function
int userDatabaseInputA(int userIdNumberArray[]) 
{
    int DbIdNumber = -1;
    do
    {
        DbIdNumber++;
        if (userIdNumberArray[DbIdNumber] == 0)
        {
            break;
        }
    } while (DbIdNumber < MaxMember);
    
    return DbIdNumber;
}


int main()
{
    //Declaration Part
    //Declaration Array
    int userIdNumberArray[MaxMember] = {0, };
    
    //Declaration Struct
    struct userInterfaceStruct *userInterface[MaxMember];
    for (int i = 0; i < sizeof(userInterface) / sizeof(struct userInterfaceStruct *); i++)
    {
        userInterface[i] = malloc(sizeof(struct userInterfaceStruct));
    }
    
    //Declaration Var
    int Number = 0;
    int Command = 1;
    
    //Realization Part
    do
    {
        Number = userDatabaseInputA(userIdNumberArray);
        
        Command = 0;
    } while (Command != 0);
    
    //Declaration Struct Malloc Free
    for (int i = 0; i <sizeof(struct userInterface *); i++)
    {
        free(userInterface[i]);
    }
}

#define _CRT_SECURE_NO_WARNINGS
#define MaxMember 10

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct userInterfaceStruct {
    int IdNumber;
    char UserName[20];
    char UserPhoneNumber[11];
};

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

struct userInterfaceStruct userDatabaseInputB(int BIdNumber, const char BuserName, const char BuserPhoneNumber)
{
    struct userInterfaceStruct userInterface;
    
    userInterface.IdNumber = BIdNumber;
    strcpy(userInterface.UserName, BuserName);
    strcpy(userInterface.UserPhoneNumber, BuserPhoneNumber);
    
    return userInterface;   
}

int main()
{
    //Declaration Part
    //Declaration Struct
    struct userInterfaceStruct *userInterface[MaxMember];
    for (int i = 0; i < sizeof(userInterface) / sizeof(struct userInterfaceStruct *); i++)
    {
        userInterface[i] = malloc(sizeof(struct userInterfaceStruct));
    }
    //Declaration Array
    static int userIdNumberArray[MaxMember] = {0, };
    
    //Declaration UserInformation
    int Number;
    char Name, Phone;
    scanf("%s", &Name);
    scanf("%s", &Phone);
    Number = userDatabaseInputA(userIdNumberArray);
    printf("%d\n", Number);
    userInterface[Number] = userDatabaseInputB(Number, Name, Phone);
    
    userInterface[1]->IdNumber = 2;
    strcpy(userInterface[1]->UserName, "Friend");
    strcpy(userInterface[1]->UserPhoneNumber, "01098765432");
    
    //printf("%5d\t%5d\n", userInterface[0]->IdNumber, userInterface[1]->IdNumber);
    printf("%s\n", userInterface[0]->UserName);
    //printf("%s\n", userInterface[1]->UserName);
    printf("%s\n", userInterface[0]->UserPhoneNumber);
    //printf("%s\n", userInterface[1]->UserPhoneNumber);
    
    //Declaration Struct Malloc Free
    for (int i = 0; i <sizeof(struct userInterface *); i++)
    {
        free(userInterface[i]);
    }
    return 0;
}

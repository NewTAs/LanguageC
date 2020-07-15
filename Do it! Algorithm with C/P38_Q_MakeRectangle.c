#include <stdio.h>

int main()
{
    //Declaration
    int UserIntA = 0, UserIntB  = 0;
    int i = 1, j = 1;
    
    //Input
    printf("높이: ");
    scanf("%d", &UserIntA);
    printf("너비: ");
    scanf("%d", &UserIntB);
    
    //Realization & Output
    for (i = 1; i <= UserIntA; i++)
    {
        for (j = 1; j <= UserIntB; j++)
        {
            printf("*");
        }
        putchar('\n');
    }
}

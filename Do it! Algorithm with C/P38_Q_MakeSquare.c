#include <stdio.h>

int main()
{
    //Declaration
    int UserInt = 0;
    int i = 1, j = 1;
    
    //Input
    printf("입력할 수: ");
    scanf("%d", &UserInt);
    
    //Realization & Output
    for (i = 1; i <= UserInt; i++)
    {
        for (j = 1; j <= UserInt; j++)
        {
            printf("*");
        }
        putchar('\n');
    }
}

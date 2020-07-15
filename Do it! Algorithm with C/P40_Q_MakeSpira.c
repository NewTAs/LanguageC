#include <stdio.h>

//function
void Spira(int n)
{
    int i = 1, j = 1;
    
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= ((i - 1) * 2) + 1; j++)
        {
            putchar('*');
        }
        printf("\n");
    }
}

int main()
{
    //Declaration
    int UserInt = 0;
    
    //Input
    printf("정수를 입력해주세요. :");
    scanf("%d", &UserInt);
    
    //Realization & Output
    Spira(UserInt);
    
    return 0;
}

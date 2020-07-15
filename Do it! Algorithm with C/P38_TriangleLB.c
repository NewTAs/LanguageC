#include <stdio.h>

int main()
{
    //Declaration
    int i = 1, j = 1, n = 0;
    
    //Input
    do
    {
        printf("몇 단 삼각형입니까? :");
        scanf("%d", &n);
    } while (n <= 0);
    
    //Realization & Output
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            putchar('*');
        }
        printf("\n");
    }
    
    return 0;
}

/*
for문이 서로 어떻게 연결되어 작동하는지를 응용하여,
이제는 정해진 값까지 가는 것이 아닌 유동적인 for문의 제어문을 활용한다.
*/

#include <stdio.h>

int main()
{
    //Declaration
    int i = 1, j = 1;
    
    //Realization & Output
    printf("- - - - - 곱 셈 표 - - - - -\n");
    
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            printf("% 3d", i * j);
        }
        putchar('\n');
    }
    
    return 0;
}

/*
이중 반복문을 사용하는 알고리즘의 가장 간단한 예시.
*/

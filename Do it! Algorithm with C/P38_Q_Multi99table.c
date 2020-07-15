#include <stdio.h>

int main()
{
    //Declaration
    int i = 1, j = 1;
    
    //Realization & Output
    printf("   |");
    
    for (i = 1; i <= 9; i++)
    {
        printf("% 3d", i);
    }
    
    printf("\n---+----------------------------\n");
    
    for (i = 1; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            if (j == 0)
            {
                printf(" %d |", i);
            }
            else
            {
                printf("% 3d", i * j);
            }
        }
        printf("\n");
    }
}

/*
이중 루프를 이용해서 곱셈표를 출력할 때에,
어떤 행과 어떤 열을 곱해서 결과값이 나오는지에 대한
시각적인 부분을 위해 보완하였다.
*/

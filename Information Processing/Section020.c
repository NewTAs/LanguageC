#include <stdio.h>

int main()
{
    int UserInt = 0;
    
    scanf("%d", &UserInt);
    
    printf("약수: ");
    for(int i = 1; i<=UserInt; i++)
    {
        if (UserInt % i == 0)
        {
            printf("%d ", i);
        }
    }
}

/*
약수는 나머지가 0임을 이용하여 나머지가 0일 때, 그 때의 i 값을 바로 출력하는 방식을 사용하였다.
*/

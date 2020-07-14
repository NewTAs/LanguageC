#include <stdio.h>

//function
int Med3(int a, int b, int c)
{
    if (a >= b)
    {
        if (b >= c)
            return b;
        else if (a <= c)
            return a;
        else
            return c;
    }
    else if (a > c)
        return a;
    else if (b > c)
        return c;
    else
        return b;
}

int main()
{
    //Declaration
    int a = 0, b = 0, c = 0;
    
    //Input
    printf("세 정수의 중앙값을 구합니다.\n");
    printf("A의 값, B의 값, C의 값\n");
    
    scanf("%d, %d, %d", &a, &b, &c);
    
    //Output
    printf("중앙값은 %d입니다.\n", Med3(a, b, c));
    
    return 0;
}

/*
a와 b, 그리고 c를 차례대로 대소비교를 한 후에,
중앙값을 반환하여 출력하는 프로그램
*/

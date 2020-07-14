#include <stdio.h>

//function
int SumOf(int a, int b)
{
    int BeforeInt = 0, AfterInt = 0;
    int ResultSum = 0;
    
    if (a <= b)
    {
        BeforeInt = a;
        AfterInt = b;
    }
    else
    {
        BeforeInt = b;
        AfterInt = a;
    }
    
    for (int i = BeforeInt; i <= AfterInt; i++)
    {
        ResultSum += i;
    }
    
    return ResultSum;
}

int main()
{
    //Declaration
    int a = 1, b = 0;
    
    //Input
    puts("a부터 b까지의 합을 구합니다.");
    printf("a의 값, b의 값: \n");
    scanf("%d, %d", &a, &b);
    
    //Output
    printf("%d부터 %d까지의 합은 %d입니다.\n", a, b, SumOf(a, b));
    
    return 0;
}

/*
사용자가 입력한 두 정수의 대소 관계를 비교하여,
작은 값부터 큰 값으로 오름차순으로 정리하는 것이 반복문을 정의할 때 쉽게 사용할 수 있다.
*/

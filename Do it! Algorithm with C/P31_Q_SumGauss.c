#include <stdio.h>

int main()
{
    //Declaration
    int i = 1, n = 0;
    int sum = 0;
    
    //Input
    puts("1부터 n까지의 합을 구합니다.");
    printf("n의 값: \n");
    scanf("%d", &n);
    
    //Realization
    if (n % 2 == 0)
    {
        sum = (1 + n) * (n / 2);
    }
    else
    {
        sum = ((1 + n) * (n / 2)) + ((n / 2) + 1);
    }
    
    //Output
    printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);
    
    return 0;
}

/*
가우스의 덧셈을 활용하려 할 때, 입력 값이 홀수일 때는 중간 값이
총 값에 포함되지 않는다는 것을 고려해주어야 한다.
*/

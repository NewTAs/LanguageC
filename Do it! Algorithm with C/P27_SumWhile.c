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
    while (i <= n)
    {
        sum += i;
        i++;
    }
    
    //Output
    printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);
    
    return 0;
}

/*
1부터 사용자가 입력한 정수까지의 합을 구할 때,
반복문에서 하나의 카운트하는 수를 이용하여 조건문을 서로 같을 때까지
반복할 수 있도록 하여 합을 구하는 방법을 사용한 프로그램
*/

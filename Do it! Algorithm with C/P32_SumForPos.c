#include <stdio.h>

int main()
{
    //Declaration
    int i = 1, n = 0;
    int sum = 0;
    
    //Input
    puts("1부터 n까지의 합을 구합니다.");
    do
    {
        printf("n의 값: \n");
        scanf("%d", &n);
    } while (n <= 0);
    
    //Realization
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    
    //Output
    printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);
    
    return 0;
}

/*
1부터 음수의 값 또는 0까지의 합을 구할 수 없기 때문에,
양수를 받았을 때만 실행할 수 있도록 예외처리를 해주는 프로그램
*/

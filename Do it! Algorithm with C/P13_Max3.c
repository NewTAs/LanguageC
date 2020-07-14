#include <stdio.h>

int main()
{
    //Declaration
    int a = 0, b = 0, c = 0;
    int max = 0;
    
    //Input
    printf("세 정수의 최댓값을 구합니다.\n");
    printf("A의 값, B의 값, C의 값\n");
    
    scanf("%d, %d, %d", &a, &b, &c);
    
    //Realization
    max = a;
    
    if (b > max)
        max = b;
    if (c > max)
        max = c;
        
    //Output
    printf("최댓값은 %d입니다.\n", max);
    
    return 0;
}

/*
1) max에 a값을 넣는다.
2) b값이 max보다 크면 max에 b값을 넣는다.
3) c값이 max보다 크면 max에 c값을 넣는다.
*/

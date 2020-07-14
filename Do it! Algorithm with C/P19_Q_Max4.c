#include <stdio.h>

int main()
{
    //Declaration
    int a = 0, b = 0, c = 0, d = 0;
    int max = 0;
    
    //Input
    printf("네 정수의 최댓값을 구합니다.\n");
    printf("A의 값, B의 값, C의 값, d의 값\n");
    
    scanf("%d, %d, %d, %d", &a, &b, &c, &d);
    
    //Realization
    max = a;
    
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    if (d > max)
        max = d;
        
    //Output
    printf("최댓값은 %d입니다.\n", max);
    
    return 0;
}

/*
1) max에 a값을 넣는다.
2) b값이 max보다 크면 max에 b값을 넣는다.
3) c값이 max보다 크면 max에 c값을 넣는다.
4) d값이 max보다 크면 max에 d값을 넣는다.
*/

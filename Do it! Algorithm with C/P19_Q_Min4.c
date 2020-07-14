#include <stdio.h>

int main()
{
    //Declaration
    int a = 0, b = 0, c = 0, d = 0;
    int min = 0;
    
    //Input
    printf("네 정수의 최솟값을 구합니다.\n");
    printf("A의 값, B의 값, C의 값, d의 값\n");
    
    scanf("%d, %d, %d, %d", &a, &b, &c, &d);
    
    //Realization
    min = a;
    
    if (b < min)
        min = b;
    if (c < min)
        min = c;
    if (d < min)
        min = d;
        
    //Output
    printf("최솟값은 %d입니다.\n", min);
    
    return 0;
}

/*
1) min에 a값을 넣는다.
2) b값이 min보다 작으면 min에 b값을 넣는다.
3) c값이 min보다 작으면 min에 c값을 넣는다.
4) d값이 min보다 작으면 min에 d값을 넣는다.
5) min를 출력한다.
*/

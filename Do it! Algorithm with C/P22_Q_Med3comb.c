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
    printf("Med3(%d, %d, %d) = %d\n", 3, 2, 1, Med3(3, 2, 1));  //a > b > c
    printf("Med3(%d, %d, %d) = %d\n", 3, 2, 2, Med3(3, 2, 2));  //a > b = c
    printf("Med3(%d, %d, %d) = %d\n", 3, 1, 2, Med3(3, 1, 2));  //a > c > b
    printf("Med3(%d, %d, %d) = %d\n", 3, 2, 3, Med3(3, 2, 3));  //a = c > b
    printf("Med3(%d, %d, %d) = %d\n", 2, 1, 3, Med3(2, 1, 3));  //c > a > b
    printf("Med3(%d, %d, %d) = %d\n", 3, 3, 2, Med3(3, 3, 2));  //a = b > c
    printf("Med3(%d, %d, %d) = %d\n", 3, 3, 3, Med3(3, 3, 3));  //a = b = c
    printf("Med3(%d, %d, %d) = %d\n", 2, 2, 3, Med3(2, 2, 3));  //c > a = b
    printf("Med3(%d, %d, %d) = %d\n", 2, 3, 1, Med3(2, 3, 1));  //b > a > c
    printf("Med3(%d, %d, %d) = %d\n", 2, 3, 2, Med3(2, 3, 2));  //b > a = c
    printf("Med3(%d, %d, %d) = %d\n", 1, 3, 2, Med3(1, 3, 2));  //b > c > a
    printf("Med3(%d, %d, %d) = %d\n", 2, 3, 3, Med3(2, 3, 3));  //b = c > a
    printf("Med3(%d, %d, %d) = %d\n", 1, 2, 3, Med3(1, 2, 3));  //c > b > a
    
    return 0;
}

/*
Med3라는 함수로 구현한 3개의 변수 중 중앙값을 구하는 것에 대한
모든 경우의 수를 대입해 보았을 때, 결과값이 잘 나오고 있음을 확인할 수 있다.
*/

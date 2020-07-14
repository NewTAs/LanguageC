#include <stdio.h>

//function
int Max3(int a, int b, int c)
{
    int max = a;
    
    if (b > max)
        max = b;
    if (c > max)
        max = c;
        
    return max;
}

int main()
{
    //Output
    printf("Max3(%d, %d, %d) = %d\n", 3, 2, 1, Max3(3, 2, 1));  //a > b > c
    printf("Max3(%d, %d, %d) = %d\n", 3, 2, 2, Max3(3, 2, 2));  //a > b = c
    printf("Max3(%d, %d, %d) = %d\n", 3, 1, 2, Max3(3, 1, 2));  //a > c > b
    printf("Max3(%d, %d, %d) = %d\n", 3, 2, 3, Max3(3, 2, 3));  //a = c > b
    printf("Max3(%d, %d, %d) = %d\n", 2, 1, 3, Max3(2, 1, 3));  //c > a > b
    printf("Max3(%d, %d, %d) = %d\n", 3, 3, 2, Max3(3, 3, 2));  //a = b > c
    printf("Max3(%d, %d, %d) = %d\n", 3, 3, 3, Max3(3, 3, 3));  //a = b = c
    printf("Max3(%d, %d, %d) = %d\n", 2, 2, 3, Max3(2, 2, 3));  //c > a = b
    printf("Max3(%d, %d, %d) = %d\n", 2, 3, 1, Max3(2, 3, 1));  //b > a > c
    printf("Max3(%d, %d, %d) = %d\n", 2, 3, 2, Max3(2, 3, 2));  //b > a = c
    printf("Max3(%d, %d, %d) = %d\n", 1, 3, 2, Max3(1, 3, 2));  //b > c > a
    printf("Max3(%d, %d, %d) = %d\n", 2, 3, 3, Max3(2, 3, 3));  //b = c > a
    printf("Max3(%d, %d, %d) = %d\n", 1, 2, 3, Max3(1, 2, 3));  //c > b > a
    
    return 0;
}

/*
Max3라는 함수로 구현한 3개의 변수 중 최댓값을 구하는 것에 대한
모든 경우의 수를 대입해 보았을 때, 결과값이 잘 나오고 있음을 확인할 수 있다.
*/

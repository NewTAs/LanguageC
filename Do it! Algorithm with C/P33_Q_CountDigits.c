#include <stdio.h>

int main()
{
    //Declaration
    int UserInt = 0, Count = 0;
    int Denominator = 1;
    
    //Input
    printf("양의 정수를 입력해주세요.: \n");
    scanf("%d", &UserInt);
    
    //Realization
    while(1)
    {
        Denominator *= 10;
        Count++;
        
        if (UserInt / Denominator == 0)
            break;
    }
    
    //Output
    printf("그 수는 %d자리 입니다.", Count);
    
    return 0;
}

/*
10의 n승을 한 값으로 정수를 나누었을 때 결과가 0일 경우,
그 정수의 자릿수는 n-1이라는 것을 이용한 프로그램 
*/

#include <stdio.h>

int main()
{
    //Declaration
    int n = 0;
    
    //Input
    printf("정수를 입력하세요.\n");
    scanf("%d",&n);
    
    //Realization & Output
    if (n > 0)
        printf("이 수는 양수입니다.\n");
    else if (n < 0)
        printf("이 수는 음수입니다.\n");
    else
        printf("이 수는 0입니다.\n");
        
    return 0;
}

/*
간단한 대소 비교를 통하여 정수 값의 부호(양수/음수/0)를 판단하여 출력하는 프로그램
*/

#include <stdio.h>

int main()
{
    //Declaration
    int no = 0;
    
    //Input
    printf("2자리 정수를 입력하세요.\n");
    
    
    //Realization
    do
    {
        printf("수는: \n");
        scanf("%d", &no);
    } while (no < 10 || no > 99);
    
    //Output
    printf("변수 no의 값은 %d이 되었습니다.\n", no);
    
    return 0;
}

/*
각 조건을 부정하고 논리곱을 논리합으로, 논리합을 논리곱으로 바꾸고 다시 전체를 부정하는 것은,
원래의 조건과 같다는 드모르간 법칙을 while 제어문에 적용시켜본다면 다음과 같다.
!(no >= 10 && no <= 99)
*/

#include <stdio.h>

int main()
{
    int ArrayA[99], Count=0;
    
    for (int i=2; i<=100; i++)
    {
        ArrayA[(i-2)]=i;
    }
    
    for (int i=0; i<98; i++)
    {
        if (ArrayA[i]==0)
        {
            continue;
        }
        else
        {
            printf("%d ", ArrayA[i]);
            Count++;
            
            int ChangeInt = i;
            
            while(1)
            {
                ChangeInt = ChangeInt + ArrayA[i];
                
                if(ChangeInt > 98)
                    break;
                
                ArrayA[ChangeInt]= 0;
            }
        }
    }

    printf("\n%d", Count);
    
    return 0;
}
/*
Line23. i가 2일 경우에 ArrayA[2]의 값인 3은 소수이기 때문에, 3의 배수는 모두 소수가 아니라는 것을 알려야 한다.
이를 위해 3의 배수가 들어 있는 자리인 5, 8, 11, ~ 번째 자리에 0을 넣어주어야 하기에 i부터 시작해야 한다.
*/

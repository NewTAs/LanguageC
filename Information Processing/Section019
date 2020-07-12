#include <stdio.h>

int main()
{
    int UserIntA = 0, UserIntB = 0;
    int BigInt = 0, SmallInt = 0;
    int MokInt = 0, NMGInt = 0;
    int ResultGCM = 0, ResultLCM =0;
    
    scanf("%d %d", &UserIntA, &UserIntB);
    
    if (UserIntA >= UserIntB)
    {
        BigInt = UserIntA;
        SmallInt = UserIntB;
    }
    else
    {
        BigInt = UserIntB;
        SmallInt = UserIntA;
    }
    
    while(1)
    {
        MokInt = BigInt / SmallInt;
        NMGInt = BigInt % SmallInt;
        
        if (NMGInt == 0)
        {
            break;
        }
        else
        {
            BigInt = SmallInt;
            SmallInt = NMGInt;
        }
    }
    
    ResultGCM = SmallInt;
    ResultLCM = (UserIntA * UserIntB) / ResultGCM;
    
    printf("최대공약수: %d\t최소공배수: %d", ResultGCM, ResultLCM);
    
    return 0;
}

/*
유클리드 호제법: 큰 수를 작은 수로 나누어 나머지가 0이 될 때까지 반복하여 최대공약수를 구하는 방법
유클리드 호제법을 이용하게 되면, NMGInt가 0이 되지 않을 때, 분모의 값을 다음의 분자의 값으로 올리는 것은 대입으로 해결할 수 있다.
*/

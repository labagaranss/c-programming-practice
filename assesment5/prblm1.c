#include <stdio.h>

int main()
{
    int n,t,sum=0,i,prime=1;

    scanf("%d",&n);

    if(n<2) prime=0;
    else
    {
        for(i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                prime=0;
                break;
            }
        }
    }

    t=n;
    while(t>0)
    {
        sum+=t%10;
        t/=10;
    }

    if(prime && sum==14)
        printf("Prime & sum of digits is 14");
    else if(!prime && sum==14)
        printf("Not Prime but sum of digits is 14");
    else if(prime && sum!=14)
        printf("Prime & sum of digits is not 14");
    else
        printf("Not Prime & sum of digits is not 14");

    return 0;
}

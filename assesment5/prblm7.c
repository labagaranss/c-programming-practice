#include <stdio.h>

int main()
{
    int n,d,count=0;

    scanf("%d",&n);

    while(n>0)
    {
        d=n%10;
        if(d==0||d==1||d==4||d==9)
            count++;
        n/=10;
    }

    printf("%d",count);
    return 0;
}

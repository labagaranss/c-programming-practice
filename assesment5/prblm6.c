#include <stdio.h>

int main()
{
    int n,two,count=0;

    scanf("%d",&n);

    while(n>=10)
    {
        two=n%100;
        if(two%2!=0)
            count++;
        n/=10;
    }

    printf("%d",count);
    return 0;
}

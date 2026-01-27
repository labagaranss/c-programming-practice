#include <stdio.h>

int main()
{
    int n,pos=1,count=0;

    scanf("%d",&n);

    while(n>0)
    {
        if(pos%2!=0)
            count++;
        n/=10;
        pos++;
    }

    printf("%d",count);
    return 0;
}

#include <stdio.h>

int main()
{
    int n,two,count=0;

    scanf("%d",&n);

    while(n>=10)
    {
        two=n%100;
        if(two==16||two==25||two==36||two==49||two==64||two==81)
            count++;
        n/=10;
    }

    printf("%d",count);
    return 0;
}

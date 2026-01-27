#include <stdio.h>
int main()
{
    int i;
    for(i=10;i<=99;i+=2)
    {
        if((i/10)+(i%10)==6)
        {
            printf("%d",i);
        }
    }
    return 0;
}

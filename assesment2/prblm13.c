#include <stdio.h>
int main()
{
    int num,d0,d1;
    scanf("%d",&num);
    if(num<1000||num>9999)
    {
        return 0;
    }
    d0=num%10;
    d1=(num/10)%10;
    if(d0==d1)
    {
        printf("1");
    }
    else 
    {
        printf("0");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int num,tens,units;
    scanf("%d",&num);
    if(num<10||num>99)
    {
        return 0;
    }
    tens=num/10;
    units=num%10;
    if(tens<units)
    {
        printf("1");
    }
    else 
    {
        printf("0");
    }
    return 0;
}

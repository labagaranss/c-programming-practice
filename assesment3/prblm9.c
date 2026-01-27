#include <stdio.h>
int main()
{
    int num,d1,d2;
    scanf("%d",&num);
    if(num<10||num>99)
    {
        return 0;
    }
    d1=num/10;
    d2=num%10;
    if(d1!=d2)
    {
        printf("success");
    }
    else
    {
         printf("failure");
    }
    return 0;
}

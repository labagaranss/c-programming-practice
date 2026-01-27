#include <stdio.h>
int main()
{
    int num,temp,first,last,pow=1;
    scanf("%d",&num);
    temp=num;
    last=num%10;
    while(temp>=10)
    {
        temp/=10;
        pow*=10;
    }
    first=temp;
    num=num-first*pow;
    num=num/10;
    num=last*pow+num*10+first;
    printf("%d",num);
    return 0;
}

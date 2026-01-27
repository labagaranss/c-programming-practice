#include <stdio.h>
int main()
{
    int num,d1,d2,d3,d4,result;
    scanf("%d",&num);
    if(num<1000||num>9999)return 0;
    d1=num/1000;
    d2=(num/100)%10;
    d3=(num/10)%10;
    d4=num%10;
    result=d1*1000+d2*100+d4*10+d3;
    printf("%d",result);
    return 0;
}

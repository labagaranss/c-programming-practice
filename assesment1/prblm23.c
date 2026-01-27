#include <stdio.h>
int main()
{
    int num,result;
    scanf("%d",&num);
    if(num<100||num>999)return 0;
    result=(num/100)*100+(num%10);
    printf("%d",result);
    return 0;
}

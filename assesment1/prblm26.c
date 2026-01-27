#include <stdio.h>
int main()
{
    int num,sum;
    scanf("%d",&num);
    if(num<100||num>999)return 0;
    sum=(num/100)+((num/10)%10)+(num%10);
    printf("%d",sum);
    return 0;
}

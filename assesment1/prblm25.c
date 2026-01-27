#include <stdio.h>
int main()
{
    int num,sum;
    scanf("%d",&num);
    if(num<10||num>99)return 0;
    sum=(num/10)+(num%10);
    printf("%d",sum);
    return 0;
}

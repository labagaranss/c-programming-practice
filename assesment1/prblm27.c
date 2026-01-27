#include <stdio.h>
int main()
{
    int num,sum;
    scanf("%d",&num);
    if(num<1000||num>9999)return 0;
    sum=(num/1000)+((num/100)%10)+((num/10)%10)+(num%10);
    printf("%d",sum);
    return 0;
}

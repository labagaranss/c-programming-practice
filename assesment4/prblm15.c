#include <stdio.h>

int main()
{
    int n,i,prime=1;
    scanf("%d",&n);
    if(n<2) 
    prime=0;
    else
    for(i=2;i*i<=n;i++) 
    if(n%i==0)
    {
        prime=0;break;
    }
    if(prime) 
    printf("%dprime\n",n);
    else 
    printf("%dnot prime\n",n);
    return 0;
}

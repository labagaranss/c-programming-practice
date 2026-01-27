#include <stdio.h>

int main()
{
    int n,mid,i,prime=1;

    scanf("%d",&n);

    mid=(n/10)%100;

    if(mid<2)
        prime=0;
    else
    {
        for(i=2;i*i<=mid;i++){
            if(mid%i==0){
                prime=0;
                break;
            }
        }
    }

    if(prime)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}

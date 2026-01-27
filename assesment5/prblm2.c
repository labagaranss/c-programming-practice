#include <stdio.h>

int main()
{
    int n,two,i,prime=1;

    scanf("%d",&n);

    two=n%100;

    if(two<2)
        prime=0;
    else
    {
        for(i=2;i*i<=two;i++)
        {
            if(two%i==0)
            {
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

#include <stdio.h>

void disp_assend()
{
    int i,sum=0;
    for(i = 0; i <= 9; i++)
    {
       if(i%2==1)
       {
        sum=sum+i;
       }
    }
     printf("%d ", sum);
}

int main()
{
    disp_assend();
    return 0;
}

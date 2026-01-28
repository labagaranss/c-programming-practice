#include <stdio.h>

void disp_assend()
{
    int i,sum=0;
    for(i = 5; i >= 1; i--)
    {
       sum=sum+i;
    }
     printf("%d ", sum);
}

int main()
{
    disp_assend();
    return 0;
}

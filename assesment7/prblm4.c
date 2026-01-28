#include <stdio.h>
void disp_biggest_4digit_div7_9()
{
    int num,biggest=0;
    printf("enter the number: ");
    scanf("%d", &num);
    for(int i=1000;i<=9999;i++)
    {
        if(i%7==0 && i%9==0)
        {
            biggest=0;
        }
        printf("%d", biggest);
    }
}
int main()
{
    disp_biggest_4digit_div7_9();
    return 0;
}

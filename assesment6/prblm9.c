#include <stdio.h>

void disp_2digit_odd_below20()
{
    int i, sum = 0;
    for(i = 70; i <= 79; i++)
    {
        if(i % 2 == 1)
        {
            sum = sum + i;
        }
    }
    printf("%d", sum);
}

int main()
{
    disp_2digit_odd_below20();
    return 0;
}

#include <stdio.h>

void disp_2digit_odd_below20()
{
    int i, sum;
    for(i = 11; i < 20; i++)
    {
        sum = (i / 10) + (i % 10);
        if(i % 2 == 0 && sum == 6)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    disp_2digit_odd_below20();
    return 0;
}

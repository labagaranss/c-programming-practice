#include <stdio.h>

void disp_2digit_odd_below20()
{
    int i;
    for(i = 11; i < 20; i++)
    {
        if(i % 2 == 1)
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

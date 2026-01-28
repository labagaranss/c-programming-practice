#include <stdio.h>

void disp_2digit_odd_sum7(int res[], int *count)
{
    int i;
    *count = 0;
    for(i = 10; i <= 99; i++)
    {
        int sum = (i / 10) + (i % 10);
        if(i % 2 == 1 && sum == 7)
            res[(*count)++] = i;
    }
}

int main()
{
    int result[10], c, i;
    disp_2digit_odd_sum7(result, &c);

    for(i = 0; i < c; i++)
        printf("%d ", result[i]);

    return 0;
}

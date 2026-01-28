#include <stdio.h>

void count_sum14()
{
    int i, num, sum, digit;
    int count = 0;

    for(i = 1; i < 100000; i++) 
    {
        num = i;
        sum = 0;
        while(num != 0)
        {
            digit = num % 10;
            sum += digit;
            num = num / 10;
        }
        if(sum == 14)
            count++;
    }

    printf("%d", count);
}

int main()
{
    count_sum14();
    return 0;
}

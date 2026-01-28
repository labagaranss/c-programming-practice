#include <stdio.h>

void count_single_digit_prime()
{
    int i, count = 0;

    for(i = 1; i <= 9; i++)
    {
        if(i == 2 || i == 3 || i == 5 || i == 7)
            count++;
    }

    printf("%d", count);
}

int main()
{
    count_single_digit_prime();
    return 0;
}

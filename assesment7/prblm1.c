#include <stdio.h>

void sum_two_digit_ones5()
{
    int n, prev, curr, two_digit, sum = 0;
    scanf("%d", &n); 

    if(n < 0) n = -n; 

    prev = n % 10;
    n = n / 10;

    while(n > 0)
    {
        curr = n % 10;
        two_digit = curr * 10 + prev;

        if(two_digit % 10 == 5 && two_digit >= 10) 
        {
            sum += two_digit;
        }

        prev = curr;
        n = n / 10;
    }

    printf("%d", sum);
}

int main()
{
    sum_two_digit_ones5();
    return 0;
}

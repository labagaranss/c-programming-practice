#include <stdio.h>

void sum_of_digits()
{
    int n, sum = 0, digit;
    scanf("%d", &n);

    if(n < 0) n = -n; // handle negative numbers

    while(n != 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    printf("%d", sum);
}

int main()
{
    sum_of_digits();
    return 0;
}

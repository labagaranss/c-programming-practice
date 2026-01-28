#include <stdio.h>

void interchange_first_last()
{
    int n, num, first, last, digits = 0, pow10 = 1;
    scanf("%d", &n);
    int sign = 1;
    if(n < 0) {
        sign = -1;
        n = -n;
    }
    num = n;
    last = n % 10;
    while(num != 0)
    {
        digits++;
        num = num / 10;
    }
    num = n;
    first = num;
    while(first >= 10)
    {
        first = first / 10;
    }
    for(int i = 1; i < digits; i++)
        pow10 = pow10 * 10
    n = n - first * pow10 - last; 
    n = n + last * pow10 + first; 

    n = n * sign;
    printf("%d", n);
}

int main()
{
    interchange_first_last();
    return 0;
}

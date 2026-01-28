#include <stdio.h>
void count_odd_digits()
{
    int n, digit, count = 0;
    scanf("%d", &n);
    if(n < 0) n = -n; 
    while(n != 0)
    {
        digit = n % 10;
        if(digit % 2 == 1)
            count++;
        n = n / 10;
    }
    printf("%d", count);
}
int main()
{
    count_odd_digits();
    return 0;
}

#include <stdio.h>
void print_single_digit_square()
{
    int n, digit;
    scanf("%d", &n); 
    if(n < 0) n = -n; 
    while(n != 0)
    {
        digit = n % 10;
        if(digit == 1 || digit == 4 || digit == 9)
            printf("%d ", digit);
        n = n / 10;
    }
}
int main()
{
    print_single_digit_square();
    return 0;
}

#include <stdio.h>
void reverse_number()
{
    int n, rev = 0, digit;
    scanf("%d", &n);
    int sign = 1;
    if(n < 0) {
        sign = -1;
        n = -n; 
    }
    while(n != 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    rev = rev * sign;
    printf("%d", rev);
}
int main()
{
    reverse_number();
    return 0;
}

#include <stdio.h>
int main() 
{
    int n = 0, lastDigit;
    int c;
    while ((c = getchar()) != '\n') 
    {
        n = n * 10 + (c - '0');
    }
    lastDigit = n % 10;
    if (lastDigit % 2 != 0) 
    {
        n -= 1;
    }
    int reversed = 0, temp = n, count = 0;
    while (temp > 0) 
    {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
        count++;
    }
    if (count == 0) 
    { 
        putchar('0');
    } else 
    {
        while (count--)
         {
            putchar((reversed % 10) + '0');
            reversed /= 10;
        }
    }

    return 0;
}

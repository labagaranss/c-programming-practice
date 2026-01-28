#include <stdio.h>
void print_two_digit_square()
{
    int n, prev, curr, two_digit;
    scanf("%d", &n); 
    if(n < 0) n = -n; 
    if(n < 10) 
        printf("0");
        return;
    }
    prev = n % 10; 
    n = n / 10;
    while(n > 0)
    {
        curr = n % 10;
        two_digit = curr * 10 + prev;

        if(two_digit == 16 || two_digit == 25 || two_digit == 36 || 
           two_digit == 49 || two_digit == 64 || two_digit == 81)
        {
            printf("%d ", two_digit);
        }

        prev = curr;
        n = n / 10;
    }
}

int main()
{
    print_two_digit_square();
    return 0;
}

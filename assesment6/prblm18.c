#include <stdio.h>
void count_two_digit_odd()
{
    int n, count = 0;
    scanf("%d", &n);
    if(n < 10) 
    {
        printf("0");
        return;
    }
    int prev = n % 10;
    n = n / 10;
    while(n > 0)
    {
        int curr = n % 10;
        int two_digit = curr * 10 + prev; 
        if(two_digit % 2 == 1) 
            count++;
        prev = curr;
        n = n / 10;
    }
    printf("%d", count);
}
int main()
{
    count_two_digit_odd();
    return 0;
}

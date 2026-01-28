#include <stdio.h>

void count_total_digit()
{
    int n, count = 0;
    scanf("%d", &n);

    if(n == 0)
        count = 1;
    else
    {
        while(n != 0)
        {
            count++;
            n = n / 10;
        }
    }

    printf("%d", count);
}

int main()
{
    count_total_digit();
    return 0;
}

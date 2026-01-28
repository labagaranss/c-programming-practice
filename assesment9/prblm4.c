#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if(n < 0) n = -n;

    int a[10], i = 0;

    while(n > 0)
    {
        a[i++] = n % 10;
        n = n / 10;
    }

    for(i = i-1; i >= 0; i--)
        printf("%c\n", a[i] + '0');

    return 0;
}

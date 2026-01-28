#include <stdio.h>

void sum_five_numbers()
{
    int a[5], i;
    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    for(i = 1; i < 5; i++)
        a[0] = a[0] + a[i];

    printf("%d", a[0]);
}

int main()
{
    sum_five_numbers();
    return 0;
}

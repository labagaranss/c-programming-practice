#include <stdio.h>

void increment_array(int a[], int n)
{
    for(int i = 0; i < n; i++)
        a[i] = a[i] + 1;
}

int main()
{
    int a[5], i;

    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    increment_array(a, 5);

    for(i = 0; i < 5; i++)
        printf("%d ", a[i]);

    return 0;
}

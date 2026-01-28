#include <stdio.h>

int main()
{
    int a[5], i;
    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    for(i = 1; i < 5; i++)
        a[0] = a[0] + a[i];

    printf("%.2f", a[0] / 5.0);
    return 0;
}

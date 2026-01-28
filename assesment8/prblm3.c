#include <stdio.h>

int main()
{
    int a[5], i;
    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    for(i = 1; i < 5; i++)
        if(a[i] < a[0])
            a[0] = a[i];

    printf("%d", a[0]);
    return 0;
}

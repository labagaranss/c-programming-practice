#include <stdio.h>

void memcopy(int src[], int dst[], int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        if(src[i] != dst[i])
        {
            printf("failure");
            return;
        }
    }
    printf("success");
}

int main()
{
    int a[5], b[5], i;

    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < 5; i++)
        scanf("%d", &b[i]);

    memcopy(a, b, 5);

    return 0;
}

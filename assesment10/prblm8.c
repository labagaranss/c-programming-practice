#include <stdio.h>

void intcon(int src1[], int src2[], int size1, int size2, int dst[])
{
    int i;
    for(i = 0; i < size1; i++)
        dst[i] = src1[i];

    for(i = 0; i < size2; i++)
        dst[size1 + i] = src2[i];
}

int main()
{
    int a[5], b[5], c[10];
    int i;

    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < 5; i++)
        scanf("%d", &b[i]);

    intcon(a, b, 5, 5, c);

    for(i = 0; i < 10; i++)
        printf("%d ", c[i]);

    return 0;
}

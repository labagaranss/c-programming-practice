#include <stdio.h>

void strconcat(char src1[], char src2[], char dst[])
{
    int i = 0, j = 0;

    // copy src1 to dst
    while(src1[i] != '\0')
    {
        dst[i] = src1[i];
        i++;
    }

    // append src2 to dst
    while(src2[j] != '\0')
    {
        dst[i] = src2[j];
        i++;
        j++;
    }

    dst[i] = '\0'; // terminate the string
}

int main()
{
    char a[100], b[100], c[200];
    scanf("%s", a);
    scanf("%s", b);

    strconcat(a, b, c);

    printf("%s", c);

    return 0;
}

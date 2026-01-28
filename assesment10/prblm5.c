#include <stdio.h>

void stringcopy(char src[], char dst[])
{
    int i = 0;
    while(src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0'; // terminate destination string
}

int main()
{
    char src[100], dst[100];
    scanf("%s", src);

    stringcopy(src, dst);

    printf("%s", dst);

    return 0;
}

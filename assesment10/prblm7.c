#include <stdio.h>

void strcomp(char src[], char dst[])
{
    int i = 0;
    while(src[i] != '\0' && dst[i] != '\0')
    {
        if(src[i] != dst[i])
        {
            printf("failure");
            return;
        }
        i++;
    }
    if(src[i] == '\0' && dst[i] == '\0')
        printf("success");
    else
        printf("failure");
}

int main()
{
    char a[100], b[100];
    scanf("%s", a);
    scanf("%s", b);

    strcomp(a, b);

    return 0;
}

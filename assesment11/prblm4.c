#include <stdio.h>
#include <string.h>

int main()
{
    char a[51], b[51];
    int res[101] = {0};
    int i, j, len1, len2;

    scanf("%s %s", a, b);

    len1 = strlen(a);
    len2 = strlen(b);
    for(i = len1 - 1; i >= 0; i--)
    {
        for(j = len2 - 1; j >= 0; j--)
        {
            res[i + j + 1]()

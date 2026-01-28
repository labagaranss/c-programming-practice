#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], sub[50];
    int i, j, len1, len2, found;

    scanf("%s %s", str, sub);

    len1 = strlen(str);
    len2 = strlen(sub);

    for(i = 0; i <= len1 - len2; i++)
    {
        found = 1;
        for(j = 0; j < len2; j++)
            if(str[i + j] != sub[j])
            {
                found = 0;
                break;
            }
        if(found)
            printf("%d ", i);
    }

    return 0;
}

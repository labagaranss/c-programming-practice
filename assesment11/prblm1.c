#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], ch;
    int i;

    scanf("%s %c", s, &ch);

    for(i = 0; s[i] != '\0'; i++)
        if(s[i] == ch)
            printf("%d ", i);

    return 0;
}

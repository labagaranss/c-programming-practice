#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, words = 0;

    gets(s); 

    for(i = 0; s[i] != '\0'; i++)
        if((s[i] != ' ' && (i == 0 || s[i-1] == ' ')))
            words++;

    printf("%d", words);

    return 0;
}

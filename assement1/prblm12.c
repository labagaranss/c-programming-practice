#include <stdio.h>
int main() 
{
    int num, rev;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    rev = (num % 10) * 10 + (num / 10);
    printf(" %d\n", rev);
    return 0;
}

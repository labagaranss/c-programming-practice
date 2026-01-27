#include <stdio.h>
int main() 
{
    int num, tens;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    tens = num / 10;
    printf("%d\n", tens);
    return 0;
}

#include <stdio.h>
int main() 
{
    int num, result, tens;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = num - 5;
    tens = (result / 10) % 10; 
    (tens % 2) && printf(" %d\n", result);
    return 0;
}

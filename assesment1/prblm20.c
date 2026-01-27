#include <stdio.h>

int main() 
{
    int num, result, sum;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    result = num - 5;
    sum = (result / 10) + (result % 10);  
    (sum % 2) && printf(" %d\n", result);
    return 0;
}

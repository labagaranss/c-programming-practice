#include <stdio.h>
int main() 
{
    int num, result;
    int ones, hundreds;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    result = num - 5;
    ones = result % 10;         
    hundreds = result / 100;     
    (ones % 2 && hundreds % 2) && printf(" %d\n", result);
    return 0;
}

#include <stdio.h>
int main() 
{
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = num - 5;
    (result % 2) && printf(" %d\n", result);
     return 0;
}

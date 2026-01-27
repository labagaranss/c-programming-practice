#include <stdio.h>
int main() 
{
    int num, sum;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    sum = (num / 100) + ((num / 10) % 10) + (num % 10);   
    while (sum >= 10) 
    {
        int temp = sum;
        sum = (temp / 10) + (temp % 10);
    }
    printf("Result: %d\n", sum);
    return 0;
}

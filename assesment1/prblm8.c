#include <stdio.h>
int main()
 {
    int num, ones;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    ones = num % 10;
    printf(" %d\n", ones);
    return 0;
}

#include <stdio.h>
int main() {
    float num, result;
    printf("Enter a number: ");
    scanf("%f", &num);
    result = num / 8;
    printf(" %.2f\n", result);
    return 0;
}

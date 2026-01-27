#include <stdio.h>
int main() {
    int num, tens;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    tens = (num / 10) % 10;
    printf(" %d\n", tens);
    return 0;
}

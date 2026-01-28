#include <stdio.h>
void calculate_hcf()
{
    int a, b, temp;
    scanf("%d %d", &a, &b); 
    if(b > a)
    {
        temp = a;
        a = b;
        b = temp;
    }
    while(b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    printf("%d", a); 
}
int main()
{
    calculate_hcf();
    return 0;
}

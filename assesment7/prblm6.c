#include <stdio.h>
void calculate_lcm()
{
    int a, b, max, lcm;
    scanf("%d %d", &a, &b);
    max = (a > b) ? a : b;

    while(1)
    {
        if(max % a == 0 && max % b == 0)
        {
            lcm = max;
            break;
        }
        max++;
    }

    printf("%d", lcm);
}

int main()
{
    calculate_lcm();
    return 0;
}

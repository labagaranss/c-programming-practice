#include <stdio.h>

void disp_assend()
{
    int i;
    for(i = 5; i >= 1; i--)
    {
        printf("%d ", i);
    }
}

int main()
{
    disp_assend();
    return 0;
}

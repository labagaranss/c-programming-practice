#include <stdio.h>

int main()
{
    int a[5], b[5], i, j = 0, k, flag;

    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < 5; i++)
    {
        if(a[i] <= 1)
            flag = 0; 
        else
        {
            flag = 1;
            for(k = 2; k * k <= a[i]; k++)
                if(a[i] % k == 0)
                {
                    flag = 0;
                    break;
                }
        }

        if(flag == 0) 
            b[j++] = a[i];
    }

    for(i = 0; i < j; i++)
        printf("%d ", b[i]);

    return 0;
}

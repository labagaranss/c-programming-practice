#include <stdio.h>
void middle_two_prime()
{
    int n, middle, i, flag = 1;
    scanf("%d", &n);
    middle = (n / 10) % 100; 
    if(middle <= 1)
        flag = 0;
    else
    {
        for(i = 2; i * i <= middle; i++)
        {
            if(middle % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("Prime");
    else
        printf("Not Prime");
}
int main()
{
    middle_two_prime();
    return 0;
}

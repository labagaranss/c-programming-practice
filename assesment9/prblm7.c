#include <stdio.h>

int main()
{
    int n, i;
    int a[50];      
    char c[51];     
    scanf("%d", &n); 
    for(i = 0; i < 5; i++) 
        scanf("%d", &a[i]);
    for(i = 0; i < 5; i++) 
        c[i] = a[i] + '0';
    c[5] = '\0'; 
    printf("%s", c); 
    return 0;
}

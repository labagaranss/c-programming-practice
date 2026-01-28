#include <stdio.h>

void memcopy(int src[], int dst[], int size)
{
    for(int i = 0; i < size; i++)
        dst[i] = src[i];
}

int main()
{
    int src[5], dst[5], i;

    for(i = 0; i < 5; i++)
        scanf("%d", &src[i]);  // input source array

    memcopy(src, dst, 5);       // copy to destination array

    for(i = 0; i < 5; i++)
        printf("%d ", dst[i]);  // print destination array

    return 0;
}

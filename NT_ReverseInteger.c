#include <stdio.h>
#include <stdlib.h>

int reverse(int x)
{
    int tempValue = 0;
    int extract = 0;
    while (x != 0)
    {
        extract = x % 10;
        tempValue = tempValue * 10 + extract;
        x = x / 10;
        printf("x:%d, extract:%d, tempValue:%d \n", x, extract, tempValue);
    }
    printf("=======================\n");

    return tempValue;
}

void main()
{
    printf("Reverse of %d  is %d \n", -213, reverse(-213));
    printf("Reverse of %d  is %d \n", 4156, reverse(4156));
    printf("Reverse of %d  is %d \n", __INT_MAX__, reverse(__INT_MAX__));
}
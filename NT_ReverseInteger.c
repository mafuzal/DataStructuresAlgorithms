#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int reverse(int x)
{
    int reverseValue = 0;
    int extract = 0;
    while (x != 0)
    {
        extract = x % 10;
        if (reverseValue > INT_MAX / 10 || (reverseValue == INT_MAX / 10) && (extract > 7))
            return 0;
        if (reverseValue < INT_MIN / 10 || (reverseValue == INT_MIN / 10) && (extract < -8))
            return 0;
        reverseValue = reverseValue * 10 + extract;
        x = x / 10;
    }

    return reverseValue;
}

void main()
{
    printf("Reverse of %d  is %d \n", -213, reverse(-213));
    printf("Reverse of %d  is %d \n", 4156, reverse(4156));
    printf("Reverse of %d  is %d \n", INT_MAX, reverse(INT_MAX));
    printf("Reverse of %d  is %d \n", INT_MIN, reverse(INT_MIN));
}

/**
 * @brief 
 * Consider INT_MAX: 2147483647
 * INT_MAX/10 = 214748364 
 * Reverse > 214748364, say 214748365
 * Reverse*10 = 2147483650 is overflowing 
 * Also, Reverse*10 = 2147483640 , Now if we add 
 * up to 7 from extract, we will reach INT_MAX 
 * Therefore, we cannot exceed extract <= 7
 * 
 */

/**
 * @brief 
 * Consider INT_MIN: -2147483648
 * INT_MIN/10 = -214748364 
 * Reverse < -214748364, say -214748365
 * Reverse*10 = -2147483650 is overflowing 
 * Also, Reverse*10 = -2147483650 , Now if we add 
 * up to -8 from extract, we will reach INT_MIN 
 * Therefore, we cannot exceed extract >=-8
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
int divide(int dividend, int divisor);
int main()
{
    printf("Dividend:%d, Divisor:%d with calculated Quotient:%d\n",7, -3, divide(7,-3));
    printf("Dividend:%d, Divisor:%d with calculated Quotient:%d\n",4, 2, divide(4,2));
    printf("Dividend:%d, Divisor:%d with calculated Quotient:%d\n",5, 2, divide(4,2));
    printf("Dividend:%d, Divisor:%d with calculated Quotient:%d\n",4, -2, divide(4,-2));
    printf("Dividend:%d, Divisor:%d with calculated Quotient:%d\n",-2147483648, -1, divide(-2147483648,-1));
    return 0;
}

int divide(int dividend, int divisor)
{
    int result = 0;
    int temp;
    int quotient = 0;
    bool isNegative = (dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0) ? true : false;
    int absDividend = (dividend < 0) ? ((unsigned int)-1 * dividend) : dividend;
    int absDivisor = (divisor < 0) ? ((unsigned int)-1 * divisor) : divisor;


    while (absDividend >= absDivisor)
    {
        int temp = absDivisor;
        quotient = 1;
        while (temp <= absDividend)
        {
            temp <<= 1;
            quotient <<= 1;
        }
        result += quotient >> 1;
        absDividend -= temp >> 1;
    }

    if (isNegative == true)
    {
        result = ~result + 1;
    }
    else if (result > INT_MAX)
    {
        result = INT_MAX;
    }
        
    return result;
}
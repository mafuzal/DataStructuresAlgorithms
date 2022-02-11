#include <stdio.h>
#include <stdlib.h>
double myPow(double x, int n);
void main()
{
    printf("%f to the power of %d is %f \n", 2.0, 3, myPow(2, 3));
    printf("%f to the power of %d is %f \n", 2.0, 2, myPow(2, 2));
    printf("%f to the power of %d is %f \n", 2.1, 3, myPow(2.1, 3));
    printf("%f to the power of %d is %f \n", 2.0, -2, myPow(2, -2));
    printf("%f to the power of %d is %f \n", 0.445, 0, myPow(0.445, 0));
}
// To Try Fast Power Algorithm Recursive
double myPow(double x, int n)
{

    double y = 1;
    long long N = n;
    if (N < 0)
    {
        x = 1 / x;
        N = -N;
    }

    for (long long i = N; i > 0; i /= 2)
    {
        if (i % 2 == 1)
        {
            y *= x;
        }
        x *= x;
    }

    return y;
}

#include <stdio.h>
#include <stdlib.h>
double myPow(double x, int n);
void main()
{
    printf("%f to the power of %d is %f \n", 2.0, 3, myPow(2, 3));
    printf("%f to the power of %d is %f \n", 2.1, 3, myPow(2.1, 3));

}

double myPow(double x, int n)
{
    double result = x;
    int temp = n;
    if (temp < 0)
    {
        temp = temp * -1;
    }

    for (int i = 1; i <= n; i++)
    {
        result += result;
        printf("Answer: %f\n",result);
    }
    

    if (n < 0)
    {
        result = 1 / result;
    }
    return result;
}
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
//To Try Fast Power Algorithm Recursive 
double myPow(double x, int n)
{
    if (n == 0)
        return 1;
    if (x == 0)
        return 0;

    double result = x;
    int temp = n;
    if (temp < 0)
    {
        temp = temp * -1;
        x = 1/x;
    }

    for (int i = 1; i < temp; i++)
    {
        result *= x;
    }

    return result;
}


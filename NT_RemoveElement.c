#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
int removeElement(int* nums, int numsSize, int val);
int main()
{
    int nums = {2, 3, 9, 5, 2, 6};
    removeElement(&nums, 7,2);

    return 0;
}

int removeElement(int* nums, int numsSize, int val)
{
    int temp[50] = {0};
    

}
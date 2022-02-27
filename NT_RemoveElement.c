//Remove Elements 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int removeElement(int* nums, int numsSize, int val);
int main()
{
    int nums[] = {2, 3, 9, 5, 2, 6};
    removeElement(nums, 7,2);

    return 0;
}

int removeElement(int* nums, int numsSize, int val)
{
    
    int temp[50] = {0};
    int save[50] = {0};
    int count = 0;
    for (int i = 0; i< numsSize; i++)
    {
        if (nums[i] == val)
        {
            temp[count++] = i;
        }
         
    }
    bool checker = true;
    int saveCount = 0;
    for (int i = 0; i< count; i++)
    {
        for(int j = 0; j < count; j++)
        {
            if (nums[i] == temp[j] )
            {
                checker = false;
            }
        }
        if(checker = true)
        {
            save[saveCount++] = nums[i]; 
        }

        return save;
    }







    
    

}
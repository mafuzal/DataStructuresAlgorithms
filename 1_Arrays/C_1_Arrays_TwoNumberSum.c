#include <stdio.h>
#include <malloc.h>

int *twoNumberSum(int* array[], int targetSum)
{
	int size = sizeof array / sizeof array[0];
	int *returnArray[2];  

	for(int i = 0; i <size-1; i++)
	{
		for (int j = i+1; j<size;j++)
		{
			if(array[i] + array[j] == targetSum)
			{
				return returnArray[2] = {array[i],array[j]};
			}
		}
	}
}
int main()
{
	int array1[] = {11, 9, 20, 30,15,25 };
	int* result1 = twoNumberSum(&array1,20)

}
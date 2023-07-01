int maxProduct(int* nums, int numsSize){
	int maxVal1 = -1;
	for (int i = 0; i < numsSize; i++)
	{
		if ((maxVal1 == -1) || (nums[i] > nums[maxVal1]))
		{
				maxVal1 = i;
		}
	}

	int maxVal2 = -1;
	for (int i = 0; i < numsSize; i++)
	{
		if ((i != maxVal1) && ((maxVal2 == -1) || (nums[i] > nums[maxVal2])))
		{
				maxVal2 = i;
		}
	}

	return (nums[maxVal1]) * (nums[maxVal2]); 

}
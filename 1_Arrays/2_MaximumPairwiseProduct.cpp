class Solution {
public:
    int maxProduct(vector<int>& nums) {
	int lengthOfVector = nums.size();
	int max_index1 = -1;
	int max_index2 = -1;

	for (int i = 0; i < lengthOfVector; i++)
	{
		if ((max_index1 == -1) || (nums[i] > nums[max_index1]))
		{
			max_index1 = i;
		}
	}

	for (int i = 0; i < lengthOfVector; i++)
	{
		if ((i != max_index1) && ((max_index2 == -1) || (nums[i] > nums[max_index2])))
		{
			max_index2 = i;
		}
	}

        return (nums[max_index1] - 1) * (nums[max_index2] - 1);
        
    }
};
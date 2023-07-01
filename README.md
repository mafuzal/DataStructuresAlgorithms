# DataStructuresAlgorithms
# 1.0 Arrays: 
## 1.1 Majority Element 
### C++:
```cpp
class Solution {
public:
    int majorityElement(vector<int>& arr) 
        int majorityElement = arr[0];
        int count = 0;
        for(int i = 0; i<arr.size(); i++)
        {
            if(count == 0)
            {               
                majorityElement = arr[i];                
            }
            count += (majorityElement == arr[i]) ? 1 : -1;
        }
        return majorityElement;
    } 
};
```
### C:
```c
int majorityElement(int* nums, int numsSize){
    int majorityElementVal = nums[0];
    int count = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (count == 0)
        {
            majorityElementVal = nums[i];
        }
        count += (majorityElementVal == nums[i]) ? 1 : -1;
    }
    return majorityElementVal;

}
```
### Python:
```python
class Solution(object):
    def majorityElement(self, nums):
        majorityElementVal = nums[0]
        count = 0
        for n in range(len(nums)):
            if count == 0:
                majorityElementVal = nums[n]
            count += (1 if majorityElementVal == nums[n] else -1)

        return majorityElementVal
```
### Java:
```java
class Solution {
    public int majorityElement(int[] nums) {
      int count = 0;
      int majorityElementVal = nums[0];
      for ( int i = 0; i < nums.length; i++)
      {
        if (count == 0)
        {
          majorityElementVal = nums[i];
        }
        if (majorityElementVal == nums[i])
        {
          count++;
        }
        else
        {
          count--;
        }
      }
      return majorityElementVal;
        
    }
}
```
### Julia:
```julia
function MajorityElement(nums::Vector{Int})::Int
    majorityElementValue = nums[1]
    count = 0

    for n in nums
        if (count == 0)
            majorityElementValue = n
        end
        
        if (majorityElementValue == n)
            count += 1
        else
            count -= 1
        end
    end
    
    return majorityElementValue;
end 


function main()
    nums = [ 2, 9, 1, 1, 1, 2, 2, 2, 2, 2]
    majorityElementValue = MajorityElement(nums)
    println("Majority Element", majorityElementValue)
end 

main()
```
## 1.2 Maximum Pairwise Product 
C++:
```cpp
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

        return (nums[max_index1]) * (nums[max_index2]);
        
    }
};
```
C:
```c
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
```
Python:
```python
class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        maxVal1 = -1

        for i in range(len(nums)):
            if ((maxVal1 == -1) or (nums[i] > nums[maxVal1])):
                maxVal1 = i
        
        
        maxVal2 = -1
        for i in range(len(nums)):
            if ((i != maxVal1) and ((maxVal2 == -1) or (nums[i] > nums[maxVal2]))):
                maxVal2 = i     

        return (nums[maxVal1]) * (nums[maxVal2])   
```

Java:
```java
class Solution {
    public int maxProduct(int[] nums) {
        int maxVal1 = -1;
				for (int i = 0; i < nums.length; i++)
				{
					if ((maxVal1 == -1) || (nums[i] > nums[maxVal1]))
					{
						maxVal1 = i;
					}
				}

				int maxVal2 = -1;
				for (int i = 0; i < nums.length; i++)
				{
					if ((i != maxVal1) && ((maxVal2 == -1) || (nums[i] > nums[maxVal2])))
					{
						maxVal2 = i;
					}
				}

				return (nums[maxVal1] -1) * (nums[maxVal2] -1);
    }
}
```

Julia:
```julia
# Arrays: MaximumPairwiseProduct 
function MaximumPairwiseProduct(nums::Vector{Int})::Int
    maxIndex1 = -1;
    for i = 1 : length(nums)
        if ((maxIndex1 == -1) || (nums[i] > nums[maxIndex1]))
            maxIndex1 = i
        end
    end

    maxIndex2 = -1;
    for i = 1 : length(nums)
        if ((i != maxIndex1) && ((maxIndex2 == -1) || (nums[i] > nums[maxIndex2])))
            maxIndex2 = i
        end
    end
    
    return (nums[maxIndex1]) * (nums[maxIndex2]);
end 


function main()
    nums = [3, 4, 5, 2]
    maximumPairwiseValue = MaximumPairwiseProduct(nums)
    println("MaximumPairwiseProduct = ", maximumPairwiseValue)
end 

main()

```
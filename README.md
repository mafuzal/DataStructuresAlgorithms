# DataStructuresAlgorithms
# 1.0 Arrays: 
## 1.1 Majority Element 
### C++:
```cpp
class Solution {
public:
    int majorityElement(vector<int>& arr) 
    {
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

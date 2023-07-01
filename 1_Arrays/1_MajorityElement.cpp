// Array: Majority Element 
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
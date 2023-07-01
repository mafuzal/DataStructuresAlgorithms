# Arrays: Majority Element 
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


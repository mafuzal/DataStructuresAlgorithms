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

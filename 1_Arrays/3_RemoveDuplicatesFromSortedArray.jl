# Arrays: Remove Duplicates 
function RemoveDuplicates(nums::Vector{Int})::Int
    j = 2
    for i = 2 : length(nums)
        if (nums[i] != nums[i-1])
            nums[j] = nums[i]
            j = j + 1
        end
    end

   
    return (j - 1);
end 


function main()
    nums =  [0,0,1,1,1,2,2,3,3,4]
    removeDuplicates = RemoveDuplicates(nums)
    println("Remove Duplicates = ", removeDuplicates)
end 

main()

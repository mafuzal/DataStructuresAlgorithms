"""
Arrays and Strings 
Q1: Two Sum 
"""

class ArraysStrings(object):             
    """
    Function: TwoSumBrute(self, numsList, targetValue)
    params[in]:     numsList: List[int]
    params[in]:     targetValue: int 
    params[in]:     result : List[int]
    
    """
    def TwoSumBrute(self, numsList, targetValue):
        for i in range(len(numsList)):
            for j in range(i+1,len(numsList)):
                sum = numsList[i] + numsList[j]
                if sum == targetValue:
                    return[i, j]
    """
    Function: TwoSumFast(self, numsList, targetValue)
    params[in]:     numsList: List[int]
    params[in]:     targetValue: int 
    params[in]:     result : List[int]
    
    """
    def TwoSumFast(self, numsList, targetValue):
        remainderMap = dict()
        for i in range(len(numsList)):
            num = numsList[i]
            remainder = targetValue - num 
            
            if num in remainderMap:
                return [remainderMap[num], i]
            else:
                remainderMap[remainder] = i                
    
numsList = [8, 9, 5, 6, 12]
targetValue  = 11
twoSumBrute = ArraysStrings()
getIndexList = twoSumBrute.TwoSumBrute(numsList, targetValue)
print(getIndexList)
       
        
twoSumBruteFast = ArraysStrings()
getIndexList = twoSumBruteFast.TwoSumFast(numsList, targetValue)
print(getIndexList)    
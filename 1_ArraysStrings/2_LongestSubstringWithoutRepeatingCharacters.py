"""
Arrays and Strings 
Q2:Longest Substring Without Repeating Characters 
Sliding Window Concept Used 
"""
class ArraysStrings(object):  
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        resultSubStringLength = 0
        charSet = set()
        leftPointer = 0
        
        for rightPointer in range(len(s)):
            while(s[rightPointer] in charSet):
                print('charSet.remove %s' %( s[rightPointer]))
                charSet.remove(s[rightPointer])
                print('leftPointer Before: %d' %(leftPointer))
                leftPointer += 1
                print('leftPointer After: %d' %(leftPointer))
            charSet.add(s[rightPointer])
            resultSubStringLength = max(resultSubStringLength, rightPointer - leftPointer + 1)
            print('resultSubStringLength: %d' %(resultSubStringLength))
        return resultSubStringLength


longestString = ArraysStrings()
print(longestString.lengthOfLongestSubstring('abcdabcbbdefghddasc'))
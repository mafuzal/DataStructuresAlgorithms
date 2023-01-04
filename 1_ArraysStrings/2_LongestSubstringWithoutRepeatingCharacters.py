"""
Arrays and Strings 
Q2:Longest Substring Without Repeating Characters 
"""

def lengthOfLongestSubstring(self, s):
    """
    :type s: str
    :rtype: int
    """
    resultString = []
    for i in range(len(s)):
        if s[i] in resultString:
            continue
        else: 
            resultString.append(s[i])
    return len(s)    
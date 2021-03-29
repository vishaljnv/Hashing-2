def longestPalindrome(s):
    charCount = dict()
    oddChars = set()
        
    for c in s:
        if c not in charCount:
            charCount[c] = 0
        charCount[c] += 1
            
        if c not in oddChars:
            oddChars.add(c)
        else:
            oddChars.remove(c)

    if len(oddChars):
        return sum(charCount.values()) - (len(oddChars) - 1)
        
    return sum(charCount.values()) - len(oddChars)

print(longestPalindrome("aayyyyewpppppexuxuioeyn"))

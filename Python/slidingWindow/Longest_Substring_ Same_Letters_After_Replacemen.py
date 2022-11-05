
def func(str, k):
    wS, maxRepeatChar, maxLen=0,0,0
    dic = {}

    for wE in range(len(str)):
        # 
        rightChar = str[wE]
        if rightChar not in dic:
            dic[rightChar] = 0;
        dic[rightChar]+=1
        maxRepeatChar = max(maxRepeatChar, dic[rightChar])

        if((wE-wS+1)-maxRepeatChar) > k:
            leftChar = str[wS]
            wS+=1
            dic[leftChar] -=1
        
        maxLen = max(maxLen, wE-wS+1)
        
    return maxLen


print("start")
print(str(func("aabccbb", 2))) #5
print(str(func("abbcb", 1))) #4
print(str(func("abccde", 1))) #3
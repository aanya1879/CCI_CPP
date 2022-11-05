
def func(str, k):
    wS=wE=0
    maxlen = 0
    dic = {}

    for wE in range(len(str)):
        if str[wE] not in dic:
            dic[str[wE]] = 1
        else:
            dic[str[wE]]+=1

        while len(dic) > k:
            initChar = str[wS]
            dic[initChar]-=1
            if dic[initChar]==0:
                del dic[initChar]
            wS+=1

        maxlen = max(maxlen, wE-wS+1)
    return maxlen


print("start")
print(str(func("araaci", 2)))
print(str(func("araaci",1)))
print(str(func("cbbebi", 3)))
print(str(func("", 3)))
print(str(func("abcdef", 3)))
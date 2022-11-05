from collections import Counter

def func(pattern, s):
    p = Counter(pattern)
    print(p)
    print(s)

    for wS in range(len(s)):
        print(s[wS])
        if(s[wS] in p):
            print("in pattern")
            wE = wS
            while(wE<len(s) and wE-wS+1<=len(pattern)): # replace with count of individal 
                print(s[wE]+",", end=" ")
                if(s[wE] in p and p[s[wE]] > 0):
                    p[s[wE]] -=1
                    print(str(p))
                    wE+=1
                else:
                    p = Counter(pattern)
                    break
            if(wE-wS+1>len(pattern)):
                return True

    return False

# print(str(func("abc", "oidbcaf"))) #true
# print(str(func("odicf", "dc"))) #false
# print(str(func("bcdxabcdy", "bcdyabcdx"))) #true
print(str(func("hello", "ooolleoooleh"))) #false
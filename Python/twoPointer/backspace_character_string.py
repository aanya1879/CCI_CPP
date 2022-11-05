def func(str1, str2):
    hashCount = 0
    p1, p2 = len(str1)-1, len(str2)-1
    while(p1>=0 and p2>=0):
        # print(str1[p1] + " "+ str2[p2])
        if(str1[p1]=='#'):
            while(p1>=0 and str1[p1] == "#"):
                hashCount+=1
                p1-=1
            p1-=hashCount
            hashCount=0
        if(str2[p2]=='#'):
            while(p2>=0 and str2[p2] == "#"):
                hashCount+=1
                p2-=1            
            p2-=hashCount
            hashCount=0
        # print("after..")
        # print(str1[p1] + " "+ str2[p2])
        # print()
        if(p2<0 and p1<0):
                return True

        if(str1[p1]!=str2[p2]):
            return False
        p1-=1
        p2-=1
    return True

print(str(func("xy#z", "xzz#"))) #true
print(str(func("xy#z", "xyz#"))) #false
print(str(func("xp#", "xyz##"))) #true
print(str(func("xp##", "xyz##")))#false
print(str(func("xp##", "")))#true
print(str(func("xywrrmp", "xywrrmu#p")))#true
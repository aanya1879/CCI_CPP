def func(arr):
    n = len(arr)
    lp, rp = 0, n-1
    sqarr = [0 for x in range(n)]
    sqidx = n-1
    while lp<=rp:
        lpsq = arr[lp]*arr[lp]
        rpsq = arr[rp]*arr[rp]
        if(rpsq>lpsq):
            sqarr[sqidx] = rpsq
            rp-=1
        else:
            sqarr[sqidx] = lpsq
            lp+=1
        sqidx-=1


    return sqarr


print(str(func([-2,-1,0,1,2])))
print(str(func([0,1,2])))
print(str(func([-9,-1,0,2,4])))
print(str(func([0])))
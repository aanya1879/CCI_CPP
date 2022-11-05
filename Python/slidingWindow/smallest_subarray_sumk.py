import math


def func(S, arr):
    min_count, window_sum = math.inf, 0
    wS = 0
    if(S==0) or len(arr)==0:
        return 0;

    for wE in range(len(arr)):
        window_sum +=arr[wE]
        while(window_sum>=S):
            min_count = min(min_count, wE-wS+1)
            window_sum -= arr[wS]
            wS+=1
    while(wS<wE):
        window_sum -= arr[wS]
        wS+=1
        if(window_sum>=S):
            min_count = min(min_count, wE-wS+1)

    return min_count
           
            


print("start")
print(str(func(7, [2,1,4,1,2,2,2])))
print(str(func(7, [2,1,5,2,8])))
print(str(func(8, [3,4,1,1,6])))
print(str(func(7, [2,1,-5,2,3,4])))
print(str(func(2, [])))
print(str(func(0, [2,3,4,1,5])))
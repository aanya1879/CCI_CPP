def max_subarry_size_k(k, arr):
    max_sum, window_sum = 0, 0
    wS = 0
    if(k==0) or len(arr)==0:
        return 0;

    for wE in range(len(arr)):
        window_sum +=arr[wE]
        if(wE-wS) >=k:
            window_sum -=arr[wS]
            wS+=1 
        max_sum = max(max_sum, window_sum)
    return max_sum
           
            


print("start")
print(str(max_subarry_size_k(2, [2,3,4,1,5])))
print(str(max_subarry_size_k(2, [])))
print(str(max_subarry_size_k(0, [2,3,4,1,5])))
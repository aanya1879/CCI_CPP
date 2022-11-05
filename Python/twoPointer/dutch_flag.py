# 1 0 2 0 2 1 1 
# z       o   t
# 1 0 2 0 1 1 2
# z     o   t
def func(arr):
    high , low = len(arr)-1, 0
    i = 0;
    while(i<=high):
        val = arr[i]
        if(val ==0):
            arr[i], arr[low] = arr[low], arr[i]
            low+=1
            i+=1
        elif(val ==1):
            i+=1
        elif(val == 2):
            arr[i], arr[high] = arr[high], arr[i]
            high-=1

    return arr


print(str(func([1, 0, 2, 0, 2, 1, 1])))
print(str(func([1, 0, 2, 1, 0])))
print(str(func([2, 2, 0, 1, 2, 0])))

def func(arr):
    s, f = 0,1
    if(len(arr)==0):
        return 0
    while f < len(arr):
        if(arr[s]!=arr[f]):
            s+=1
            arr[s]=arr[f]
        f+=1

    return s+1


print(str(func([2, 3, 3, 3, 6, 9, 9])))
print(str(func([])))
print(str(func([1,2,3,4,5,6])))
print(str(func([1,1,1,1,1,1,1])))
def func(arr, target):
    idx = []
    tvals = []

    for i in range(len(arr)):
        
        if arr[i] not in tvals:
            tval = target-arr[i]
            tvals.append(tval)
        else:
            idx.append(tvals.index(tval))
            idx.append(i)
            return idx      
    return []

print(str(func( [1,2,2,3,4,6], 6)))
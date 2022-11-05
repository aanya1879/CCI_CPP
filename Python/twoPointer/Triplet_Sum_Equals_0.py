def func(arr):

    triplets = []
    arr.sort()
    print(arr)

    for i in range(len(arr)):
        target = 0 - arr[i]
        if(i>0):
            if(arr[i] != arr[i-1]):
                searchPairs(target, i, arr, triplets)
        else:
            searchPairs(target, i, arr, triplets)
    return triplets

def searchPairs(target, i, arr, triplets):
    print("...searching triplets for "+ str(arr[i]))

    l, r = i+1, len(arr)-1 

    while(l<r):

        sum = arr[l]+arr[r]
        print(arr[l],"+",arr[r],"=",target)
        if(sum>target):
            r-=1
            while(l<r and arr[r]==arr[r+1]):
                r-=1
            
        elif(sum<target):
            l+=1
            while(l<r and arr[l]==arr[l-1]):
                l+=1
            
        else:
            triplets.append([arr[i],arr[l],arr[r]])
            r-=1
            while(l<r and arr[r]==arr[r+1]):
                r-=1
            l+=1
            while(l<r and arr[l]==arr[l-1]):
                l+=1
        #     print("found! ", end=" ")
        #     print(arr[l],"+",arr[r],"=",target)

    


    
         


print(str(func([-3, 0,1, 2, -1, 1, -2, -2])))
result = func([-4,-2,-2,-2,0,1,2,2,2,3,3,4,4,6,6])
expectedresult = [[-4,-2,6],[-4,0,4],[-4,1,3],[-4,2,2],[-2,-2,4],[-2,0,2]]
print(str(result))
assert result == expectedresult

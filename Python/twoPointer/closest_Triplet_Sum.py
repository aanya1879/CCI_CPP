import sys

def threeSumClosest(arr, target):
    #sort
    arr.sort()
    print(arr)
    print()
    # keep min diff and triplet variable
    minDiff = sys.maxsize
    triplet = []
    #keep one number constant and find pairs
    for i in range(len(arr)):
        if(i>0 and arr[i]==arr[i-1]):
            continue
        minDiff, triplet = searchPairs(i, arr, target, triplet, minDiff)
        print()
    return triplet
    
    
    
def searchPairs(i, arr, target, triplet, minDiff):    
    #in remaining array 
    l, r = i+1, len(arr)-1
    print("New const... "+str(arr[i]))

    #start checking from ends
    while(l<r):
        #we check which two numbers have least differece with target-prev number (how?)
        currSum = arr[l]+arr[r]+arr[i]
        print(">"+str(arr[l]),"+",str(arr[r]),"+",str(arr[i]),"~",str(target))
        diff = abs(currSum-target)
        #if diff = mindiff, find sum and swap with array in triplets 
        print("diff "+str(diff)+" minDiff "+str(minDiff))
        if(diff == minDiff and (sum(triplet) > currSum)):
            triplet = [arr[i],arr[l],arr[r]]

            print("new triplet = "+ str(triplet))
            print("new diff < "+ str(minDiff))

        #if diff < mindiff, swap with triplets and update minDiff
        if(diff<minDiff):
            triplet = [arr[i],arr[l],arr[r]]
            minDiff = diff
            print("new triplet < "+ str(triplet))
            print("new diff < "+ str(minDiff))
        #move l & r pointer based on sum
        if(currSum<target):
            l+=1
            while(l<r and arr[l]== arr[l-1]):
                l+=1

        else:
            r-=1
            while(l<r and arr[r]==arr[r+1]):
                r-=1
    return minDiff, triplet


result = threeSumClosest([-2, 0, 1, 2], 2)
expectedresult = [-2, 1, 2]
print(str(result))
assert result == expectedresult
            

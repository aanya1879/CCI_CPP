def func(intervals, newInterval):

    #find place to insert while left of NewInterval > right of interval
    left, right = newInterval[0], newInterval[1]
    mergedIntervals = []
    toggle = 0
    if(len(intervals<1)):
        mergedIntervals.append(newInterval)
        return mergedIntervals

    for i, interval in enumerate(intervals):
        if(toggle==0 and left<=interval[1]):
            left = min(left, interval[0])
            toggle = 1
        elif(toggle==0): 
            mergedIntervals.append(interval)
        
        if(toggle==1 and right<interval[0]):
            if(right>= intervals[i-1][0]):
                right = max(right, intervals[i-1][1])
            mergedIntervals.append([left, right])
            toggle=2
        if(toggle==2):
            mergedIntervals.append(interval)
    return mergedIntervals

print(str(func([[1,3], [5,7], [8,12]],[4,6])))
print(str(func([[1,5]],[0,0]))) # [[0,0],[1,5]]
# print(str(func([[1,3], [5,7], [8,12]],[4,10])))
# print(str(func([[2,3], [5,7]],[1,4])))
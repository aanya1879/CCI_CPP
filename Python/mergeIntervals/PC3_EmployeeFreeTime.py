
def merge(intervals):
    merged_intervals = []
    print(intervals)

    start, end = 0, 1
    i = 1
    while(i<len(intervals)):
        left, right = None, None 
        while(i<len(intervals)):
            curr, prev = intervals[i], intervals[i-1]
            left, right = curr[start], curr[end]
            print("curr...", end=" ")
            print(curr)
            print("prev...", end=" ")
            print(prev)
            if(curr[start]<=prev[end]):
                #merge
                left = min(prev[start], curr[start])
                right = max(prev[end], curr[end])
                break
            else:
                merged_intervals.append(prev)
            i+=1

        while(i<len(intervals) and intervals[i][start]<right):
            right = max(right, intervals[i][end])
            i+=1
        
        merged_intervals.append([left, right])
        print("...merged so far ", end=" ")
        print(merged_intervals)
        i+=1
    print("...merged intervals ", end=" ")
    print(merged_intervals)
    return merged_intervals

def func(intervals):
    free_time = []
    merged_intervals = []
    start, end = None, None

    #merge all working intervals
    all_intervals = []
    for emp_intervals in intervals:
        for emp_interval in emp_intervals:
            all_intervals.append(emp_interval)

    #merge all_intervals    
    all_intervals.sort(key= lambda x:x[0])

    merged_intervals = merge(all_intervals)

    # find inbetween array of free intervals 
    for merged_interval in merged_intervals:
        print(merged_interval)
        if(not start):
            start = merged_interval[1]
        elif(not end):
            end = merged_interval[0]
        print(str(start)+", "+str(end))
        if(end and start):
            print("appending... ", end=" ")
            print([start, end])
            free_time.append([start, end])
            start, end = merged_interval[1], None
    if(end and start):
        print("appending... ", end=" ")
        print([start, end])
        free_time.append([start, end])
    
    print(free_time)


    # find intersection between each employees free_intervals and store in free_time
    return free_time    
intervals =[[[1,3], [5,6]], [[2,3], [6,8]]]
print(str(func(intervals))) # [3,5]

print("######################################")
intervals =[[[1,3], [9,12]], [[2,4]], [[6,8]]]
print(str(func(intervals))) # [4,6] [8,9]

print("######################################")
intervals =[[[1,3]], [[2,4]], [[3,5], [7,9]]]
print(str(func(intervals))) # [5,7]
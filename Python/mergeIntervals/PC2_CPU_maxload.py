import heapq

def func(intervals):
    maxMeetingRooms = 0
    maxCPULoad = 0
    currCpuLoad = 0
    i = 0
    h =[]
    start, end, cpuLoad = 0,1,2
    intervals.sort()
    while(i<len(intervals)):
        interval = intervals[i]
        print("interval.. ", end=" ")
        print(intervals[i])
        
        while(h and h[0][end]<= interval[start]):
            temp = heapq.heappop(h)
            print("popping ", end=" ")
            print(temp)
            currCpuLoad -= temp[cpuLoad]

        
        heapq.heappush(h, interval)
        currCpuLoad += interval[cpuLoad]
        print("len: "+str(len(h))+" maxMeetingRooms: "+str(maxMeetingRooms))
        print("currCpuLoad: "+str(currCpuLoad)+" maxCPULoad: "+str(maxCPULoad))
        if(len(h)>=maxMeetingRooms):
            maxMeetingRooms = max(maxMeetingRooms, len(h))
            maxCPULoad = max(maxCPULoad, currCpuLoad)
            print("maxCPULoad ", end=" ")
            print(maxCPULoad)

        i+=1
    
    return maxCPULoad

intervals = [[1,4,3], [2,5,4], [7,9,6]]
print(str(func(intervals))) #7

intervals = [[6,7,10], [2,4,11], [8,12,15]]
print(str(func(intervals))) #15

intervals = [[1,4,2], [2,4,1], [3,6,5]]
print(str(func(intervals))) #8
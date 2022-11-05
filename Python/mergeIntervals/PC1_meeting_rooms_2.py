import heapq

def func(intervals):
    maxMeetingRooms = 0
    i = 0
    h =[]
    start, end = 0,1
    intervals.sort()
    while(i<len(intervals)):
        interval = intervals[i]
        print("interval.. ", end=" ")
        print(intervals[i])

        while(h and h[0]<= interval[start]):
            print("popping ", end=" ")
            print(heapq.heappop(h))
        
        heapq.heappush(h, interval[end])
        maxMeetingRooms = max(maxMeetingRooms, len(h))
        i+=1
    
    return maxMeetingRooms

intervals = [(0,30),(5,10),(15,20)]
print(str(func(intervals)))

intervals = []
print(str(func(intervals)))

intervals = [(7, 10), (2,4)]
print(str(func(intervals)))
def func(nums):
        minminp, maxmaxp = nums.index(min(nums)), nums.index(max(nums))
        lenOfSubarray = 0
        minp, maxp = 0, len(nums)-1
        if(minminp == minp):
            minp = 0
            while(minp<len(nums)-1 and nums[minp]<nums[minp-1]):
                minp+=1
        
        if(maxmaxp == len(nums)-1 ):
            maxp=len(nums)-1
            while(maxp>0 and  nums[maxp]==nums[maxp-1]):
                maxp-=1            

        return maxp - minp

print(str(func([2,6,4,8,10,9,15])))


# class Solution:
#     def findUnsortedSubarray(self, nums: List[int]) -> int:
#         minminp, maxmaxp = nums.index(min(nums)), nums.index(max(nums))
#         print(nums)
#         print("of array: "+str(minminp)+ " , "+ str(maxmaxp))
#         lenOfSubarray = 0
#         if(len(nums) == 1):
#             return 0
#         minp, maxp = 0, len(nums)-1
        
#         while(minp<len(nums)-1 and nums[minp]<=nums[minp-1]):
#             minp+=1
#         if(minminp == 0):
#             leftp = minp 
#         else:
#             leftp = 0
        
#         while(maxp>0 and  nums[maxp-1]<=nums[maxp]):
#             maxp-=1   
#         if(maxmaxp != len(nums)-1):
#             rightp = len(nums)-1
#         else:
#             rightp = maxp
            
#         if(maxp == 1):
#             return 0

                
            
        
#         print("of whileloop: "+str(minp)+ " , "+ str(maxp))
#         print("of subarray: "+str(leftp)+ " , "+ str(rightp))

        
#         return maxp - minp + 1
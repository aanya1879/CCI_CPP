def func(num):

    slow, fast = num, num
    while(True):
        slow = findSquareSum(slow)
        fast = findSquareSum(findSquareSum(fast))
        if(fast == slow):
            return slow == 1


def findSquareSum(num):
    _sum = 0
    while(num>0):
        _sum += (num%10)*(num%10)
        num = num//10
    return _sum

print(str(func(23)))#True, sum of squares is 1
print(str(func(12)))#False, not happy number
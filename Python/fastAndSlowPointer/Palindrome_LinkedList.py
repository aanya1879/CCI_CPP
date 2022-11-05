# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def isPalindrome(self, head: Optional[ListNode]) -> bool:
    length = 0
    
    middle, length  = self.findMiddle(head)
    
    #check for edge cases
    if(length == 3):
        return head.val == head.next.next.val
    if(length ==2):
        return head.val == head.next.val
    if(length==1):
        return True
    
    print("middle node is "+ str(middle.val)+", length is "+ str(length))
    
    
    head2 = self.reverseLinkedList(middle)
    
    print("last node is "+str(head2.val))
    
    #check for palindrome
    p1 = head        
    p2 = head2
    
    count = 0
    
    while(count<length//2):
        count+=1
        print("front "+str(p1.val)+", back "+str(p2.val))
        if(p1.val == p2.val):
            p1 = p1.next
            p2 = p2.next
        else:
            return False
        
    return True


def findMiddle(self, head):
    f,s = head, head
    count =0
    while(f!=None and f.next!=None):
        f = f.next.next
        s = s.next
        count+=1
        
    if(f==None):
        count = count*2
        middle = s
    elif(f.next == None):
        count = count*2 +1
        middle = s.next
    else:
        print("soemthing went wrong")
        print(str(s.data))
        print(str(f.data))
    
        
    return middle, count

def reverseLinkedList(self, middle):
    prev = middle
    curr = middle.next
    _next = None
    _next = curr.next
    
    while(curr != None):
        curr.next = prev
        
        prev=curr
        curr=_next
        if(_next!=None):
            _next=_next.next
    
    return prev
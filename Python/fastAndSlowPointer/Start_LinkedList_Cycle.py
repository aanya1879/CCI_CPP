class Node:
   def __init__(self, dataVal=None, nextVal=None):
      self.data = dataVal
      self.next = nextVal

def func(head):

    fast, slow = head, head
    print()
    while(fast != None and fast.next != None):
        fast = fast.next.next
        slow = slow.next
        if(fast == slow):
            break
    
    if(fast == None or fast.next == None):
        return -1
    
    #find cycle length
    length = 1
    slow = slow.next
    while(slow!=fast):
        length += 1
        slow = slow.next
    
    print("length " + str(length))

    #move by length of cycle
    fast, slow = head, head
    for i in range(length):
        fast = fast.next
    print("fast stopped at "+ str(fast.data))

    #move by 1 till slow and fast meet
    while(fast!=slow):
        fast = fast.next
        slow=slow.next

    return fast.data


head = Node(1)
head.next = Node(2)
head.next.next = Node(3)
head.next.next.next = Node(4)
head.next.next.next.next = Node(5)

print(str(func(head)))



head = Node(1)
head.next = Node(2)
head.next.next = Node(3)
head.next.next.next = Node(4)
head.next.next.next.next = head

print(str(func(head)))

head = Node(1)
head.next = Node(2)
head.next.next = Node(3)
head.next.next.next = Node(4)
head.next.next.next.next = Node(5)
head.next.next.next.next.next = Node(6)
head.next.next.next.next = head.next.next

print(str(func(head)))

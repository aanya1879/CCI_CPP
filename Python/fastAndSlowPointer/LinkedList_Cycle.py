class Node:
   def __init__(self, data=None, next=None):
      self.data = data
      self.next = None

def func(head):

    fast, slow = head, head

    while(fast != None and fast.next != None):
        fast = fast.next.next
        slow = slow.next
        if(fast == slow):
            return True

    return False


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
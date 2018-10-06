"""
 Delete duplicate nodes
 head could be None as well for empty list
 Node is defined as
 
 class Node(object):
 
   def __init__(self, data=None, next_node=None):
       self.data = data
       self.next = next_node

 return back the head of the linked list in the below method.
"""

def RemoveDuplicates(head):
    last = head
    curr = head
    if head==None:
        return head
    elif head.next==None:
        return head
    else:
        while(curr.next!=None):
            last = curr.next
            if last.data==curr.data:
                curr.next = last.next
            else:
                curr=curr.next
        return head
  
  
  
  
  


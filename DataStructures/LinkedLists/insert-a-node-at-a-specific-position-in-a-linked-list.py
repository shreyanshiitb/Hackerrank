"""
 Insert Node at a specific position in a linked list
 head input could be None as well for empty list
 Node is defined as
 
 class Node(object):
 
   def __init__(self, data=None, next_node=None):
       self.data = data
       self.next = next_node

 return back the head of the linked list in the below method. 
"""
#This is a "method-only" submission.
#You only need to complete this method.
def InsertNth(head, data, position):
    curr = head
    i=0
    temp = Node(data)
    if position==0:
        temp.next=head
        head = temp
    else:
        while(i!=position and curr!=None):
            i+=1
            prev = curr
            curr = curr.next
        temp.next=curr
        prev.next=temp
    return head
  
  
  
  
  
  
  
  
  
  


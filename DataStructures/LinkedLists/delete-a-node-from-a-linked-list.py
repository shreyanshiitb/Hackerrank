"""
 Delete Node at a given position in a linked list
 Node is defined as
 
 class Node(object):
 
   def __init__(self, data=None, next_node=None):
       self.data = data
       self.next = next_node

 return back the head of the linked list in the below method. 
"""

def Delete(head, position):
    curr=head
    i=0
    if(position==0):
        head=head.next
    else:
        while(i!=position and curr!=None):
            i+=1
            prev = curr
            curr = curr.next
        prev.next=prev.next.next
    return head
        
        
  
  
  
  
  


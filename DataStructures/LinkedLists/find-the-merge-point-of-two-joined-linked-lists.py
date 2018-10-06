"""
 Find the node at which both lists merge and return the data of that node.
 head could be None as well for empty list
 Node is defined as
 
 class Node(object):
 
   def __init__(self, data=None, next_node=None):
       self.data = data
       self.next = next_node

 
"""

def FindMergeNode(headA, headB):
    curr1 = headA
    curr2 = headB
    count1=0
    count2=0
    while(curr1!=None):
        count1+=1
        curr1=curr1.next
    while(curr2!=None):
        count2+=1
        curr2=curr2.next
    curr1 = headA
    curr2 = headB
    if(count2>count1):
        for i in range(count2-count1):
            curr2=curr2.next
    else:
        for i in range(count1-count2):
            curr1=curr1.next
    while(curr1.next.data!=curr2.next.data):
        curr1=curr1.next
        curr2=curr2.next
    return curr1.next.data
  
  
  
  
  
  
  
  


"""
 Merge two linked list
 head could be None as well for empty list
 Node is defined as
 
 class Node(object):
 
   def __init__(self, data=None, next_node=None):
       self.data = data
       self.next = next_node

 return back the head of the linked list in the below method.
"""

def CompareLists(headA, headB):
    a = headA
    b = headB
    if(a==None and b==None):
        return 1
    else:
        while(a!=None and b!=None):
            if(a.data==b.data):
                a=a.next
                b=b.next
            else:
                return 0
        if(a!=None or b!=None):
            return 0
        else:
            return 1
                
  
  
  
  
  
  
  
  
  
  
  
  


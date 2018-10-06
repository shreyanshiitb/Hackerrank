"""
Node is defined as
self.left (the left child of the node)
self.right (the right child of the node)
self.data (the value of the node)"""

def insert(r,val):
    if r==None:
        return Node(val)
    else:
        if val<=r.data:
            curr = insert(r.left,val)
            r.left = curr
        else:
            curr = insert(r.right,val)
            r.right = curr
    return r
   #Enter you code here.


    def insert(self,head,data):
        temp = Node(data)
        temp.next = None
        curr = head
        if curr==None:
            head = temp
        elif curr.next==None:
            curr.next = temp
        else:
            while(curr.next!=None):
                curr=curr.next
            curr.next = temp
        return head

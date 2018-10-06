#!/bin/python3

max1 = 0
max2 = 0
n = int(input().strip())
while(n!=0):
    x = n%2
    if(x==1):
        max1+=1
    if(x==0 and max1>max2):
        max2 = max1
        max1 = 0        
    n = n//2
print(max(max1,max2))
    

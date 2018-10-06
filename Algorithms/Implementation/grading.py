#!/bin/python3

n = int(input())
arr =[]
while(n):
    n = n-1
    x = int(input())
    if x<38:
        print(x)
    elif x%5 >=3 :
        print((x//5+1)*5)
    else:
        print(x)
    



#!/bin/python3

n, k = map(int,input().split())
arr = []
l = n
x = 0
maximum = 0
while(n):
    n = n-1
    arr.append(0)
while(k):
    k = k-1
    a,b,c = map(int,input().split())
    arr[a-1]+=c
    if b<l :
        arr[b]-=c
for i in arr:
    x = x+i
    if(maximum<x):
        maximum = x
print(maximum)

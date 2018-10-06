#!/bin/python3

n = int(input())
arr = list(map(int,input().split()))
low = arr[0]
low_count = 0
high = arr[0]
high_count = 0
for i in arr:
    if(i>high):
        high =i
        high_count+=1
    if(i<low):
        low = i
        low_count+=1
print(high_count,low_count)

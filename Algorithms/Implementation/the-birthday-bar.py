#!/bin/python3

import sys

def solve(n, s, d, m):
    count=0
    for i in range(0,n-m+1):
        x = sum(s[i:i+m])
        if(x==d):
            count+=1
    return count
n = int(input().strip())
s = list(map(int, input().strip().split(' ')))
d, m = input().strip().split(' ')
d, m = [int(d), int(m)]
result = solve(n, s, d, m)
print(result)


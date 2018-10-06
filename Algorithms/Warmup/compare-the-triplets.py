#!/bin/python3

import sys

def solve(a0, a1, a2, b0, b1, b2):
    # Complete this function
    res = [0,0]
    if(a0==b0):
        pass
    elif(a0>b0):
        res[0] = res[0]+1
    else:
        res[1] = res[1]+1
    if(a1==b1):
        pass
    elif(a1>b1):
        res[0] = res[0]+1
    else:
        res[1] = res[1]+1
    if(a2==b2):
        pass
    elif(a2>b2):
        res[0] = res[0]+1
    else:
        res[1] = res[1]+1
    return res

a0, a1, a2 = input().strip().split(' ')
a0, a1, a2 = [int(a0), int(a1), int(a2)]
b0, b1, b2 = input().strip().split(' ')
b0, b1, b2 = [int(b0), int(b1), int(b2)]
result = solve(a0, a1, a2, b0, b1, b2)
print (" ".join(map(str, result)))




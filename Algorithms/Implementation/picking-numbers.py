#!/bin/python3

import sys

def pickingNumbers(a):
    arr = [0]*99
    max = 0
    for i in a:
        arr[i-1]+=1
    for i in range(0,len(arr)-1):
        p = arr[i]+arr[i+1]
        if(max<p):
            max = p
    return max;

        
    
    
    # Complete this function

if __name__ == "__main__":
    n = int(input().strip())
    a = list(map(int, input().strip().split(' ')))
    result = pickingNumbers(a)
    print(result)


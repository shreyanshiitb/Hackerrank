#!/bin/python3

import sys

def countingValleys(n, s):
    inValley = False
    vallies = 0
    hgt = 0
    
    for step in s:
        if step == 'U':
            hgt += 1
        else:
            hgt -= 1
            
        if not inValley:
            if hgt < 0:
                inValley = True
        elif hgt == 0:
            inValley = False
            vallies += 1
            
    return vallies

if __name__ == "__main__":
    n = int(input().strip())
    s = input().strip()
    result = countingValleys(n, s)
    print(result)


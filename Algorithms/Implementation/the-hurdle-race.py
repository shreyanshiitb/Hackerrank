#!/bin/python3

import sys

def hurdleRace(k, height):
    drink=0
    for i in height:
        if(k<i):
            drink+=(i-k)
            k = i
    return drink
if __name__ == "__main__":
    n, k = input().strip().split(' ')
    n, k = [int(n), int(k)]
    height = list(map(int, input().strip().split(' ')))
    result = hurdleRace(k, height)
    print(result)


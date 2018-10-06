#!/bin/python3

import sys

n = int(input())
candles = list(map(int,input().split(' ')))
print(candles.count(max(candles)))

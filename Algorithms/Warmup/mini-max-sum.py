#!/bin/python3

import sys

n = list(map(int,input().split()))
n.sort();
print(sum(n[0:4]),sum(n[1:5]))

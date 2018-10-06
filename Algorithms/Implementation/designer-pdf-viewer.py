#!/bin/python3

import sys

def designerPdfViewer(h, word):
    big = [ h[ord(i)-ord('a')] for i in word]
    print(max(big)*len(word))
    

if __name__ == "__main__":
    h = list(map(int, input().strip().split(' ')))
    word = input().strip()
    result = designerPdfViewer(h, word)


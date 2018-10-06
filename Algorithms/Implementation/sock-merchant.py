
def sockMerchant(n, ar):
    count = 0
    ar.sort()
    i=0
    while(i<len(ar)-1):
        if(ar[i]==ar[i+1]):
            count+=1
            i+=2
        else:
            i+=1
    return count    

n = int(input().strip())
ar = list(map(int, input().strip().split(' ')))
result = sockMerchant(n, ar)
print(result)


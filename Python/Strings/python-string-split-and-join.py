lis = []

lis = input().split()
n = len(lis)
for i in lis:
    n-=1
    if(n!=0):
        x = i+'-'
    else:
        x = i
    print(x,end='')

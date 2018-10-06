n = int(input())
arr = []
while(n):
    n = n-1
    temp = input()
    arr.append(temp)
m = int(input())
while(m):
    m = m-1
    x = arr.count(input())
    print(x)

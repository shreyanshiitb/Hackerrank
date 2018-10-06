# Enter your code here. Read input from STDIN. Print output to STDOUT
n,k = map(int,input().split())
arr = list(map(int,input().split()))
bon = int(input())
x = (sum(arr)-arr[k])//2
if bon>x:
    print(bon-x)
else:
    print('Bon Appetit')

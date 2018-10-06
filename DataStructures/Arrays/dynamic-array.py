N,Q= map(int,input().split())
lastAnswer = 0
s = []
for i in range(0,N):
    s.append([])
for i in range(0,Q):
    qt,x,app = map(int,input().split())
    seq = (lastAnswer^x)%N
    if(qt==1):
        s[seq].append(app)
    else:
        lastAnswer = s[seq][app%len(s[seq])]
        print(lastAnswer)
        

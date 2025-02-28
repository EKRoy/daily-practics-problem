# t=int(input())
# for i in range(0,t):
for _ in range(int(input())):
    n=int(input())
    cnt=n//15+1
    cnt*=3
    cnt-=2
    l=(n//15)*15+1
    for j in range(l,n+1):
        if j%3==j%5:
            cnt+=1
    print(cnt)
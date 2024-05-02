import sys
input=sys.stdin.readline
N=int(input())
B=[]

for i in range(N):
    B.append(list(map(int, input().split())))

G=[]
for i in range(N):
    G.append(list(map(int,input().split())))

for i in range(N):
    for j in range(N):
        B[i][j]-=1
        G[i][j]-=1

match=[-1]*N
pos=[0]*N

def Fight(b,g):
    c=match[g]
    for i in range(N):
        if (G[g][i]==b):
            return([b,c])
        elif (G[g][i]==c):
            return([c,b])
    return[-1,-1]

for i in range(N):
    chal = i
    while True:
        tar = B[chal][pos[chal]]
        if (match[tar]==-1):
            match[tar]=chal
            pos[chal]+=1
            break
        else:
            r=Fight(chal,tar)
            pos[chal]+=1
            match[tar]=r[0]
            chal=r[1]
P=[-1]*N
for i in range(N):
    P[match[i]]=i+1
P=list(map(str,P))
print('\n'.join(P))

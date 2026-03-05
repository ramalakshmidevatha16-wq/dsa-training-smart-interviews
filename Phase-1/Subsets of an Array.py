# Enter your code here. Read input from STDIN. Print output to STDOUT
def generate(i,subset,subsets):
    if i==n:
        if subset:
            subsets.append(subset[:])
        return
    generate(i+1,subset+[arr[i]],subsets)
    generate(i+1,subset,subsets)
t=int(input())
for _ in range(t):
    n=(int(input()))
    arr=list(map(int,input().split()))
    arr.sort()
    subsets=[]
    generate(0,[],subsets) 
    subsets.sort()
    for s in subsets:
        print(*s)
    if _!=t-1:
        print()

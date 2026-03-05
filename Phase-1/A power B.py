# Enter your code here. Read input from STDIN. Print output to STDOUT
MOD=10**9+7
def modpow(a,b):
    res = 1
    a %= MOD
    while b:
        if b & 1:
            res=(res*a)%MOD
        a=(a*a)%MOD
        b>>=1
    return res
T=int(input())
for _ in range(T):
    A,B =map(int,input().split())
    print(modpow(A,B))

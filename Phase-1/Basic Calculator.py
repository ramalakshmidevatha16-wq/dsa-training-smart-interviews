# Enter your code here. Read input from STDIN. Print output to STDOUT
n=int(input())
tokens=input().split()
res=int(tokens[0])
for i in range(1,len(tokens),2):

    op=tokens[i]
    num=int(tokens[i+1])
    if op=='+':
        res+=num
    elif op=='-':
        res-=num
    elif op=='*':
        res*=num
    elif op=='/':
        res=int(res/num)
    elif op=='%':
        res=(res%num+num)%num
print(res)

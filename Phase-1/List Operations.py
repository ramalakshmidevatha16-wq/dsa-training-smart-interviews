# Enter your code here. Read input from STDIN. Print output to STDOUT
n=int(input())
lst=[]
for _ in range(n):
    cmd=input().split()
    if cmd[0]=="append":
        lst.append(int(cmd[1]))
    elif cmd[0]=="insert":
        lst.insert(int(cmd[1]),int(cmd[2])  )
    elif cmd[0]=="extend":
        lst.extend(lst[:])
    elif cmd[0]=="reverse":
        lst.reverse()
    elif cmd[0]=="sort":
        lst.sort()
    elif cmd[0]=="count": 
        print(lst.count(int(cmd[1]))) 
        continue
    elif cmd[0]=="index":
        x=int(cmd[1])
        print(lst.index(x) if x in lst else -1) 
        continue
    elif cmd[0]=="length":
        print(len(lst))
        continue
    print(*lst)

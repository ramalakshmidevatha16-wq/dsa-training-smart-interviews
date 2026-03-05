# Enter your code here. Read input from STDIN. Print output to STDOUT
n=int(input())
d={}
for _ in range(n):
    cmd=input().split()
    action =cmd[0]
    key=int(cmd[1]) if len(cmd)>1 else None
    if action =="insert":
        d[key]=d.get(key,0)+1
    elif action =="remove":
        if d[key]>1:
            d[key]-=1
        else:
            d.pop(key)
    elif action == "delete":
        d.pop(key)
    elif action =="search":
        print("True" if key in d else "False")
    elif action=="get":
        print(d[key])
    elif action=="size":
        print(len(d))
    if action in ["insert","remove","delete"] and d:
        print(' '.join(f"{k}:{d[k]}" for k in sorted(d)))

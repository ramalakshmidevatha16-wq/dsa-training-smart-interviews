# Enter your code here. Read input from STDIN. Print output to STDOUT
p=input()
specials="!@#$%^&*()_+"
missing=0
if not any(c.isdigit() for c in p):missing +=1
if not any(c.islower() for c in p):missing +=1
if not any(c.isupper() for c in p):missing +=1
if not any(c in specials for c in p):missing +=1
print(max(missing,6-len(p)))

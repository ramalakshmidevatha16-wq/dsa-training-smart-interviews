# Enter your code here. Read input from STDIN. Print output to STDOUT
T=int(input())
for _ in range(T):
    n= int(input())
    matrix = [list(map(int,input().split())) for _ in range(n)]
    top, bottom, left, right=0,n-1,0,n-1
    spiral=[]
    while top <= bottom and  left <= right:
        for i in range(left, right+1):
            spiral.append(matrix[top][i])
        top += 1
        for i in range(top, bottom+1):
            spiral.append(matrix[i][right])
        right -= 1
        if top <= bottom:
            for i in range(right, left-1, -1):
                spiral.append(matrix[bottom][i])
            bottom -= 1
        if left <= right:
            for i in range(bottom, top-1, -1):
                spiral.append(matrix[i][left])
            left += 1
    print(*spiral)

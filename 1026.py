n = int(input())
sum=0
a=list(map(int,input().split()))
b=list(map(int,input().split()))
a.sort()
b.sort()
for i in range(n):
    sum=sum+a[i]*b[n-1-i]
print(sum)
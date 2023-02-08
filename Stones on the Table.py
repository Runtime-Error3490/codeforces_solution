count=0
n=int(input())
a=input()
for i in range(0,n-1):
    k=ord(a[i])
    m=ord(a[i+1])
    if(k!=m):
        count=count+0
    else:
        count=count+1
print(count)

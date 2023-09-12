n=int(input())
i=0
for i in range(n):
    s=input()
    if(len(s)>10):
        print(s[0]+str(len(s)-2)+s[len(s)-1])
    else:
        print(s)

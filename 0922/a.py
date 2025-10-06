


q=int(input())
for i in range(q):
    z=input()
    l = len(z)
    if l>10:
        c=z[0]
        u=z[len(z)-1]
        print(c+str(len(z)-2)+u)
    else:
        print(z)

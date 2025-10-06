

def gauss(a):
    res = (a*(a+1))/2
    return res;


def iterativa(n):
    x=0
    for i in range(n+1):
        x+=i
    return x;

def recursiva(x):
    if(x == 1):
        return 1
    return recursiva(x-1)+x



a = int(input())
print(recursiva(a))













n = int(input())
n1 = 0
n2 = 0
lst = list(map(int, input().split()))

if n == 1:
    print('NO')
else:
    for a in lst:
        if a == 100:
            n1 += 1
        else:
            n2 += 1
    
    n2 = n2 % 2
    n1 = n1 - (2 * n2)
    
    if n1 < 0:
        print('NO')
    elif n1 == 0:
        print('YES')
    else: 
        if (n1%2==0):
            print('YES')
        else:
            print('NO')

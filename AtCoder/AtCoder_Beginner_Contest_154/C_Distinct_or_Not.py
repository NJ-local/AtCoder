N = int(input())
A_set = set(list(map(int, input().split(' '))))
if len(A_set) == N:
    print('YES')
else:
    print('NO')
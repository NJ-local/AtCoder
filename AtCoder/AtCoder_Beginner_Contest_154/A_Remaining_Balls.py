S, T = input().split(' ')
A, B = list(map(int, input().split(' ')))
U = input()
if U == S:
    A -= 1
else:
    B -= 1
print('{} {}'.format(A, B))
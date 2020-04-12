N, A, B = list(map(int, input().split(' ')))
a = N // (A+B)
c = N % (A+B)
print(a*A+min(A,c))
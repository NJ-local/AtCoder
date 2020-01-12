N, K, M = list(map(int, input().split(' ')))
A_list = list(map(int, input().split(' ')))
A_total = 0
for A_n in A_list:
    A_total += A_n
A_last = M * N - A_total
if A_last > K:
    print(-1)
else:
    print(max(A_last, 0))
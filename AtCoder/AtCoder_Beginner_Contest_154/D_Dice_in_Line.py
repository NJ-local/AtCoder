N, K = list(map(int, input().split(' ')))
p_list = list(map(int, input().split(' ')))
max_val = 0
for i in range(N - K + 1):
    E_sum = 0
    for j in range(K):
        index = i + j
        E_sum += p_list[index]
    E_sum = (E_sum + K) / 2.0
    if max_val < E_sum:
        max_val = E_sum
print(max_val)
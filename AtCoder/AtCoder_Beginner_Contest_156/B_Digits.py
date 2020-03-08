N, K = list(map(int, input().split(' ')))
count = 1
com_val = K
while com_val <= N:
    count += 1
    com_val = pow(K, count)
print(count)

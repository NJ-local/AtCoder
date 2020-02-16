N, K = list(map(int, input().split(' ')))
H_list = list(map(int, input().split(' ')))
H_list.sort()
count = 0
for i in range(N - K):
    count += H_list[i]
print(count)
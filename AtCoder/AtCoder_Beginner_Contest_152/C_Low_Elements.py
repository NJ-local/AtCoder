N = int(input())
P_list = list(map(int, input().split(' ')))
min_val = 20 * 10**5 + 1
count = 0
for i in range(N):
    if min_val >= P_list[i]:
        count += 1
        min_val = P_list[i]
print(count)
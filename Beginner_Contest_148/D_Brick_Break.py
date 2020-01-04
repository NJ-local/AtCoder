N = int(input())
a_N = list(map(int, input().split(' ')))
break_count = 0
remain_count = 1
for a_n in a_N:
    if a_n == remain_count:
        remain_count += 1
    else:
        break_count += 1
if break_count == N:
    print(-1)
else:
    print(break_count)
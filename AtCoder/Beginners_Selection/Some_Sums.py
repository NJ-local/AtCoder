N,A,B = map(int, input().split(' '))

# [main process]
sum_all = 0
for i in range(N + 1):
    val_str = str(i)
    sum_val_str = '0'
    for s in val_str:
        sum_val_str += '+' + s
    sum_val = eval(sum_val_str)
    if A <= sum_val and sum_val <= B:
        sum_all += i
print(sum_all)

# strの処理で余計に時間がかかっている。

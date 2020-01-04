N = int(input())
d_n = [int(input()) for i in range(N)]
single_val_num = 0
for i in range(N):
    check_val = d_n.pop(0)
    single_val_num += 1
    if check_val in d_n:
        while check_val in d_n:
            d_n.remove(check_val)
    if len(d_n) == 0:
        break
print(single_val_num)

# -- NG --

N = int(input())
count_num = [[0] * 9] * 9
for i in range(11,N):
    num_str = str(i)
    p = int(num_str[0])
    q = int(num_str[-1])
    if q != 0:
        count_num[p - 1][q - 1] += 1
total = 0
for p in range(9):
    q = 8 - p
    total += count_num[p][q] * count_num[q][p]
print(total)
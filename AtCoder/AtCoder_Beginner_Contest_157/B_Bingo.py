size = 3
A_list = [[]] * size
A_list[0] = list(map(int, input().split(' ')))
A_list[1] = list(map(int, input().split(' ')))
A_list[2] = list(map(int, input().split(' ')))
N = int(input())
b_list = [int(input()) for _ in range(N)]
bingo_flag = False
for i in range(size):
    count = 0
    for j in range(size):
        if A_list[i][j] in b_list:
            count += 1
        else:
            break
    if count == size:
        bingo_flag = True
        break
if not bingo_flag:
    for j in range(size):
        count = 0
        for i in range(size):
            if A_list[i][j] in b_list:
                count += 1
            else:
                break
        if count == size:
            bingo_flag = True
            break
if not bingo_flag:
    count = 0
    for i in range(size):
        if A_list[i][i] in b_list:
            count += 1
        else:
            break
    if count == 3:
        bingo_flag = True
if not bingo_flag:
    count = 0
    for i in range(size):
        j = size - 1 - i
        if A_list[i][j] in b_list:
            count += 1
        else:
            break
    if count == size:
        bingo_flag = True
if bingo_flag:
    print('Yes')
else:
    print('No')



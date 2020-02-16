H, N = list(map(int, input().split(' ')))
A_list = list(map(int, input().split(' ')))
sum_atack = sum(A_list)
if sum_atack >= H:
    print('Yes')
else:
    print('No')
N = int(input())
S_dict = {}
max_count = 0
max_list = []
for i in range(N):
    S = input()
    if S in S_dict:
        S_dict[S] += 1
    else:
        S_dict[S] = 1
    if max_count < S_dict[S]:
        max_count = S_dict[S]
        max_list = [S]
    elif max_count == S_dict[S] and S not in max_list:
        max_list.append(S)
max_list.sort()
for max_S in max_list:
    print(max_S)
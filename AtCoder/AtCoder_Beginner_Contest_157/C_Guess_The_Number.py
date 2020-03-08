N, M = list(map(int, input().split(' ')))
s_list = []
c_list = []
out_num = -2
for _ in range(M):
    s, c = list(map(int, input().split(' ')))
    if s == 1 and c == 0 and N != 1:
        out_num = -1
    if out_num == -2:
        check_num = -1
        for i, s_old in enumerate(s_list):
            if s == s_old:
                if check_num == -1:
                    check_num = c_list[i]
                if check_num != c:
                    out_num = -1
                    break
    s_list.append(s)
    c_list.append(c)
if out_num == -1:
    print(out_num)
else:
    out_num_list = list(str(pow(10, N - 1)))
    for i in range(M):
        out_num_list[s_list[i] - 1] = str(c_list[i])
    out_num = ''
    for s in out_num_list:
        out_num += s
    print(out_num)

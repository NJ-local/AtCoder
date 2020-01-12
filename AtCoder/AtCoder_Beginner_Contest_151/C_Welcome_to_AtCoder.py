N, M = list(map(int, input().split(' ')))
AC_total = 0
WA_total = 0
ac_list = [False] * N
wa_list = [0] * N
for i in range(M):
    p, s = input().split(' ')
    p = int(p) - 1
    if not ac_list[p]:
        if s == 'WA':
            wa_list[p] += 1
        else:
            AC_total += 1
            WA_total += wa_list[p]
            ac_list[p] = True
print('{} {}'.format(AC_total, WA_total))
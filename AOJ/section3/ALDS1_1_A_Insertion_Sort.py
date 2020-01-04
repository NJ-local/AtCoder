N = int(input())
A_N = list(map(int, input().split(' ')))

for i in range(1, N):
    v = A_N[i]
    j = i - 1
    while j >= 0 and A_N[j] > v:
        A_N[j+1] = A_N[j]
        j -= 1
    A_N[j+1] = v
    # [print]
    print_str = ''
    for ii in range(N):
        print_str += str(A_N[ii])
        if ii != N - 1:
            print_str += ' '
    print(print_str)

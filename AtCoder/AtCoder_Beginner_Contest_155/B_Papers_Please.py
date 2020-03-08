N = int(input())
A_list = list(map(int, input().split(' ')))
for A in A_list:
    if A % 2 == 0:
        if A % 3 != 0 and A % 5 != 0:
            print('DENIED')
            exit(0)
print('APPROVED')
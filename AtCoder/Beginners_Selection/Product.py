# [get inputs]
a, b = map(int, input().split(' '))
# [main process]
if a*b % 2 != 0:
    print('Odd')
else:
    print('Even')

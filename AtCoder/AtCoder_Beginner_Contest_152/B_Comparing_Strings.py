a, b = list(map(int, input().split(' ')))
print_val = min(a,b)
count_val = max(a,b)
S = ''
for i in range(count_val):
    S += str(print_val)
print(S)
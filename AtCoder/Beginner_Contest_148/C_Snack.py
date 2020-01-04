A, B = list(map(int, input().split(' ')))
max_div_val = 0
min_A_B = min(A, B)
for i in range(min_A_B):
    div_val = i + 1
    if A % div_val == 0 and B % div_val == 0:
        max_div_val = div_val
A_divisor = A // max_div_val
B_divisor = B // max_div_val
print(A_divisor * B_divisor * max_div_val)
import math
N = int(input())
if N % 2 == 1:
    print(0)
else:
    div10 = N // 10
    sum_val = div10
    if sum_val > 0:
        count_5 = math.floor(math.log(div10, 5))
        for i in range(count_5):
            sum_val += div10 // pow(5, i + 1)
    print(sum_val)

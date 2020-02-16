H = int(input())
count = 0
H_num = 1
while True:
    count += H_num
    H = int(H/2)
    if H == 0:
        break
    H_num *= 2
print(count)
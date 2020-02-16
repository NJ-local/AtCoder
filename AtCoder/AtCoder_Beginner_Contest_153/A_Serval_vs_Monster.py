H,A = list(map(int,input().split(' ')))
count = int(H/A)
if count != H/A:
    count += 1
print(count)
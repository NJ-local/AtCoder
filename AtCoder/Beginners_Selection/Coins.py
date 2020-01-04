A = int(input())
B = int(input())
C = int(input())
X = int(input())

# max
max_500 = X // 500
max_100 = X // 100
max_50 = X // 50

# [main process]
count = 0
for a in range(min(A, max_500) + 1):
    for b in range(min(B, max_100) + 1):
        for c in range(min(C, max_50) + 1):
            if 500 * a + 100 * b + 50 * c == X:
                count += 1
print(count)

# # bottom up
# max_50 = 50 * C
# remains = X - max_50

# # from X
# max_50 = X // 50
# count = 0
# remains = max_50 - C
# if remains <= 0:
#     count += 1
    


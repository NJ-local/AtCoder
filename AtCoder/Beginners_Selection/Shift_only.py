# [get input]
N = int(input())
A_N = list(map(int, input().split(' ')))
# [main process]
binary = bin(A_N[0])
for i in range(N - 1):
    binary = bin(int(binary, 2) | A_N[i])
print(len(binary.split('1')[-1]))


N = int(input())
a_n = list(map(int, input().split(' ')))
a_n.sort()
sum_alice = 0
sum_bob = 0
for i in range(int((N/2 + 0.5))):
    index = 2 * i + 1
    if index < N:
        sum_alice += a_n[-index]
        sum_bob += a_n[-(index + 1)]
    else:
        sum_alice += a_n[-index]
print(sum_alice - sum_bob)



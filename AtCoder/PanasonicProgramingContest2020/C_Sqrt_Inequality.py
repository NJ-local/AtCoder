a, b, c = list(map(int, input().split(' ')))
left = 2 * (a * b + b * c + c * a)
right = a**2 + b**2 + c**2
if a == b:
    left = 4 * a
    right = c
elif a == c or b == c:
    left = a
    right = 0
else:
    if a - 2*c > 0 and b - 2*c > 0 and c - 2*a > 0:
        left = 0
        right = 1
if left < right:
    Ans = 'Yes'
else:
    Ans = 'No'
print(Ans)
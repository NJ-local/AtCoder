N, Y = list(map(int, input().split(' ')))
x_out,y_out,z_out = -1,-1,-1
for x in range(N + 1):
    for y in range(N + 1 - x):
        z = N - x - y
        if 10000*x + 5000*y + 1000*z == Y:
            x_out,y_out,z_out = x,y,z
            break
print(x_out,y_out,z_out)

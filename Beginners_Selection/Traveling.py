N = int(input())
# point_n = [list(map(int, input().split(' '))) for i in range(N)]
result = 'YES'
point_start = [0,0,0]
for i in range(N):
    point = list(map(int, input().split(' ')))
    time = point[0] - point_start[0]
    x_run = abs(point[1] - point_start[1])
    y_run = abs(point[2] - point_start[2])
    total_run = x_run + y_run
    check_val = time - total_run
    if check_val < 0 or check_val % 2 != 0:
        result = 'NO'
    point_start = point
print(result)

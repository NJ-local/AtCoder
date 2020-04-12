H, W = list(map(int, input().split(' ')))
if H > 1 and W > 1:
    cell_num = (int(H / 2) * 2) * (int(W / 2) * 2) / 2
    if H % 2 == 1:
        cell_num += int((W + 1) / 2)
    if W % 2 == 1:
        cell_num += int(H / 2)
else:
    cell_num = 1
print(int(cell_num))

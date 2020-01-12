N = int(input())
a_list = list(map(int, input().split(' ')))
ans_list = [i+1 for i in range(N)]
def trade(_list, i, j):
    temp = _list[i]
    _list[i] = _list[j]
    _list[j] = temp
for i, a_n in enumerate(a_list):
    
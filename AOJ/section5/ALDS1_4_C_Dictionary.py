N = int(input())
key_list = []
for i in range(N):
    com, text = input().split(' ')
    if com == 'insert':
        key_list.append(text)
    else:
        if text in key_list:
            print('yes')
        else:
            print('no')

S = input()
max_num = len(S) // 5 + 1
result = 'YES'
for i in range(max_num):
    s_num = len(S)
    if s_num >= 7:
        if S[0:7] == 'dreamer':
            if s_num >= 11:
                if S[5:11] == 'eraser':
                    S = S[11:]
                else:
                    if S[5:10] == 'erase':
                        S = S[10:]
                    else:
                        S = S[7:]
            elif s_num >= 10:
                if S[5:10] == 'erase':
                        S = S[10:]
                else:
                    S = S[7:]
            else:
                S = S[7:]
        elif S[0:6] == 'eraser':
            S = S[6:]
        elif S[0:5] in ['dream', 'erase']:
            S = S[5:]
        else:
            result = 'NO'
            break
    elif s_num == 6:
        if S == 'eraser':
            break
    elif s_num == 5:
        if S in ['dream', 'erase']:
            break
    elif s_num == 0:
        break
    else:
        result = 'NO'
        break
print(result)

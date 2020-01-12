N = int(input())
music_list = [input().split(' ') for i in range(N)]
X = input()
sleep_switch = False
total_time = 0
for music in music_list:
    if not sleep_switch:
        if music[0] == X:
            sleep_switch = True
    else:
        total_time += int(music[1])
print(total_time)
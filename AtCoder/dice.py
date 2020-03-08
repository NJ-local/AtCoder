import numpy as np
import sys

def dice(_num):
    return np.random.randint(1, _num + 1)

if __name__ == "__main__":
    if len(sys.argv) == 2:
        g_num = int(sys.argv[1])
    else:
        print('g_num = sys.argv[1]')
        exit(0)

    print(dice(g_num))

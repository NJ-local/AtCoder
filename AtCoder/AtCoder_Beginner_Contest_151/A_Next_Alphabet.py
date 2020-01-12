C = input()
alphabet_list  = [
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 
    'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 
    'w', 'x', 'y', 'z'
]
for i, alphabet in enumerate(alphabet_list):
    if C == alphabet:
        print(alphabet_list[i + 1])
        break

inputs = input().split(' ')

class Stack:
    def __init__(self, N):
        self.stack_size = N
        self.stack = []
    def push(self, x):
        if x in ['+', '-', '*']:
            term2 = '{}({})'.format(x, self.pop())
            calc_str = '({}){}'.format(self.pop(), term2)
            self.stack.append(str(eval(calc_str)))
        else:
            self.stack.append(x)
    def pop(self):
        return self.stack.pop(-1)
    def isEmpty(self):
        return len(self.stack) == 0
    def isFull(self):
        return len(self.stack) == self.stack_size

stack = Stack(200)
for A in inputs:
    stack.push(A)
print(stack.pop())

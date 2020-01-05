class Queue:
    def __init__(self):
        self.queue = []
    def enqueue(self, x):
        self.queue.append(x)
    def dequeue(self):
        return self.queue.pop(0)
    def isEmpty(self):
        return len(self.queue) == 0

n, q = list(map(int, input().split(' ')))
process_queue = Queue()
for i in range(n):
    name, time = list(input().split(' '))
    process_queue.enqueue([name, int(time)])

total_time = 0
while True:
    name, time = process_queue.dequeue()
    if time <= q:
        print('{} {}'.format(name, time + total_time))
        add_time = time
    else:
        time -= q
        process_queue.enqueue([name, time])
        add_time = q
    total_time += add_time
    if process_queue.isEmpty():
        break

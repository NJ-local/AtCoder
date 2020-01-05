#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Stack{
    private:
        int top = 0;
        int S[1000];
    public:
        void push(int x);
        int pop();
};
void Stack::push(int x){
    Stack::top += 1;
    Stack::S[Stack::top] = x;
}
int Stack::pop(){
    Stack::top -= 1;
    return Stack::S[Stack::top+1];
}

int main() {
    int a, b;
    char s[100];
    Stack stack;

    while(scanf("%s", s) != EOF){
        if (s[0] == '+'){
            b = stack.pop();
            a = stack.pop();
            stack.push(a + b);
        } else if (s[0] == '-'){
            b = stack.pop();
            a = stack.pop();
            stack.push(a - b);
        } else if (s[0] == '*'){
            b = stack.pop();
            a = stack.pop();
            stack.push(a * b);
        } else {
            stack.push(atoi(s));
        }
    }
    printf("%d\n", stack.pop());

    return 0;
}

#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<char> S;
    int puddle_num = 0;
    int total_water = 0;
    int count = 0;
    char in_char[20000];

    cin >> in_char;
    // cout << in_char << endl;

    while (count < 20000){
        if (in_char[count] == '\\'){
            S.push(in_char[count]);
        } else if (in_char[count] == '/'){
            S.pop();
            
        }
    }

    return 0;
}
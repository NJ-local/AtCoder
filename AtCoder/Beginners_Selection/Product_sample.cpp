#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int A, B, C, X;
    cin >> A >> B >> C >> X;
    int a, b, c;
    int answer = 0;
    for(int i = 0; i <= A; i++) {
        for(int j = 0; j <= B; j++){
            for(int k = 0; k <= C; k++) {
                if(i*500 + j*100 + k*50 == X) {
                    ++answer;
                }
            }
        }
    }
    cout << answer;
    return 0;
}

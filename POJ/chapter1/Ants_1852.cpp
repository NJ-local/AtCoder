#include <iostream>
using namespace  std;

int main(){
    int L, n;
    int *x;
    int min_ans = 0, max_ans = 0;

    cin >> L;
    cin >> n;
    x = new int[n];
    for (int i = 0; i < n; i++) cin >> x[i];

    // [min time]
    for (int i = 0; i < n; i++){
        min_ans = max(min_ans, min(x[i], L - x[i]));
    }
    // [max time]
    for (int i = 0; i < n; i++){
        max_ans = max(max_ans, max(x[i], L - x[i]));
    }

    cout << min_ans << endl;
    cout << max_ans << endl;

    return 0;
}
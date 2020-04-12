#include <iostream>
using namespace std;

bool dfs(int i, int n, int *A, int k){
    if (i >= n) return k == 0;
    else return dfs(i + 1, n, A, k) || dfs(i + 1, n, A, k - A[i]);
}

int main(){
    int n, k;
    int *A;
    cin >> n;
    A = new int[n];
    for (int i = 0; i < n; i++) cin >> A[i];
    cin >> k;

    if (dfs(0, n, A, k)){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    delete[] A;
    return 0;
}
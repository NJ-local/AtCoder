#include <iostream>
using namespace std;

int main(){
    int n, len = 0, sum_len = 0, max_len = 0;
    int *A;

    cin >> n;
    A = new int[n];

    for (int i = 0; i < n; i++) cin >> A[i];

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            for (int k = j + 1; k < n; k++){
                len = A[i] + A[j] + A[k];
                max_len = max(A[i], max(A[j], A[k]));
                if (2*max_len < len && sum_len < len){
                    sum_len = len;
                }
            }
        }
    }
    cout << sum_len << endl;

    delete[] A;
    return 0;
}

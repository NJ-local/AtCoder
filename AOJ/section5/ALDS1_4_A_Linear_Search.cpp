#include <iostream>
using namespace std;

int LinearSearch(int n, int *S, int _key){
    for (int i = 0; i < n; i++){
        if (S[i] == _key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n, q;
    int *S, *T;
    int C = 0;
    int addr;

    cin >> n;
    S = new int[n];

    for (int i = 0; i < n; i++){
        cin >> S[i];
    }

    cin >> q;
    T = new int[q];

    for (int j = 0; j < q; j++){
        cin >> T[j];
        addr = LinearSearch(n, S, T[j]);
        if (addr >= 0){
            C += 1;
        }
        // for (int i = 0; i < n; i++){
        //     if (S[i] == T[j]){
        //         C += 1;
        //         break;
        //     }
        // }
    }

    delete[] S;
    delete[] T;

    cout << C << endl;

    return 0;
}
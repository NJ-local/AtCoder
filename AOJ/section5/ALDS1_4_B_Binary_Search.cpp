#include <iostream>
using namespace std;

#define NOT_FOUND -1

int BinarySearch(int n, int *S, int _key){
    int left = 0;
    int right = n;
    int mid;
    while (left < right){
        mid = (int)((left + right) / 2);
        if (S[mid] == _key){
            return mid;
        } else if (S[mid] > _key){
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return NOT_FOUND;
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
    for (int i = 0; i < q; i++){
        cin >> T[i];
        addr = BinarySearch(n, S, T[i]);
        if (addr != NOT_FOUND){
            C += 1;
        }
    }
    cout << C << endl;
    delete[] S;
    delete[] T;

    return 0;
}

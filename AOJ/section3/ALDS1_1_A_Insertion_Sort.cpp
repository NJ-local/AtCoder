#include <iostream>
#include <algorithm>

void InsertionSort(A, N){
    int v, j;
    for (int i = 1; i < N - 1; i++){
        v = A[i];
        j = i - 1;
        while(j >= 0 and A[j] > v){
            A[j+1] = A[j];
            j--
        }
        A[j+1] = v;
    }
}

int main() {
    
}


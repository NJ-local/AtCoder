#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

bool solve(int i, int m, int n, int *A){
    if (m == 0){
        return true;
    } else if (i >= n){
        return false;
    }
    return solve(i + 1, m, n, A) || solve(i + 1, m - A[i], n, A);
}

int main(){
    int n, q, m;
    int *A;

    scanf("%d", &n);
    A = new int[n];
    for (int i = 0; i < n; i++) scanf("%d", &A[i]);
    scanf("%d", &q);
    for (int i = 0; i < q; i++){
        scanf("%d", &m);
        if (solve(0, m, n, A)){
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    delete[] A;
    return 0;
}

// #include <iostream>
#include <stdio.h>
using namespace std;

#define NOT_FOUND -1

/* バブルソート */
int bubbleSort(int A[], int N){
    int flag, j, temp, count;
    flag = 1;
    count = 0;
    while(flag){
        flag = 0;
        for (j = 1; j < N; j++){
            if (A[j] < A[j - 1]){
                temp = A[j];
                A[j] = A[j - 1];
                A[j - 1] = temp;
                flag = 1;
                count += 1;
            }
        }
    }
    return count;
}

int BinarySearch(int N, int *S, int _key, int lower){
    int left = lower;
    int right = N;
    int mid;
    if (lower < N){
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
    }
    return NOT_FOUND;
}

int main(){
    int N;
    int *S;
    int index;

    // cin >> N;
    scanf("%d", &N);
    S = new int[N];

    for (int i = 0; i < N; i++){
        // cin >> S[i];
        scanf("%d", &S[i]);
    }
    bubbleSort(S, N);

    // search
    for (int i = 0; i < N; i++){
        index = BinarySearch(N, S, S[i], i + 1);
        if (index != -1){
            // cout << "NO" << endl;
            printf("NO\n");
            return 0;
        }
    }
    // cout << "YES" << endl;
    printf("YES\n");

    delete[] S;
    return 0;
}
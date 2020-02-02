#include <iostream>
using namespace std;

int get_luggage_num(int *w, int n, int P, int k){
    int count = 0, temp_sum = 0, truck_sum = 1;
    for (int i = 0; i < n; i++){
        temp_sum += w[i];
        if (temp_sum > P){
            truck_sum += 1;
            temp_sum = w[i];
        }
        if (truck_sum <= k && temp_sum <= P){
            count += 1;
        } else {
            break;
        }
    }
    return count;
}

// int check(int *w, int n, int P, int k){
//     int i = 0;
//     for (int j = 0; j < k; j++){
//         long long s = 0;
//         while (s + w[i] <= P){
//             s += w[i];
//             i++;
//             if (i == n) return n;
//         }
//     }
//     return i;
// }

int main(){
    int n, k, v, P = 0;
    int *w;

    scanf("%d %d", &n, &k);
    w = new int[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &w[i]);
        // if (P < w[i]){
        //     P = w[i];
        // }
    }

    // while (true){
    //     v = get_luggage_num(w, n, P, k);
    //     if (v < n){
    //         P += 1;
    //     } else {
    //         break;
    //     }
    // }
    // printf("%d\n", P);

    // [answer]
    long long left = 0, right = 100000 * 10000, mid;
    while (right - left > 1){
        mid = (left + right) / 2;
        v = get_luggage_num(w, n, mid, k);
        // printf("mid = %lld\n", mid);
        // printf("get_luggage_num : %d\n", v);
        // v = check(w, n, mid, k);
        // printf("check : %d\n", v);
        // printf("\n");
        if (v >= n) right = mid;
        else left = mid;
    }
    printf("%lld\n", right);
    delete[] w;
}

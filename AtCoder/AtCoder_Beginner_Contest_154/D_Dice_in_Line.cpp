#include <stdio.h>
using namespace std;

int main(){
    int N, K;
    int *p_list;
    double max_val = 0, E_sum;

    scanf("%d %d", &N, &K);
    p_list = new int[N];

    for (int i = 0; i < N; i++){
        scanf("%d", &p_list[i]);
    }

    for (int i = 0; i < N - K + 1; i++){
        E_sum = 0;
        for (int j = 0; j < K; j++){
            E_sum += p_list[i + j];
        }
        E_sum = (E_sum + K) / 2.0;
        if (max_val < E_sum){
            max_val = E_sum;
        }
    }
    printf("%lf\n", max_val);

    delete[] p_list;
    return 0;
}
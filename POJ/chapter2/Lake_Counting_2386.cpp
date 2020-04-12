#include <iostream>
#include <stdio.h>
using namespace std;
#define M_MAX 100
#define N_MAX 100

void dfs(int x, int y, char **lake, int N, int M){
    int nx = 0, ny = 0;
    lake[x][y] = '.';
    for (int dy = -1; dy < 1; dy++){
        for (int dx = -1; dx < 1; dx++){
            nx = x + dx;
            ny = y + dy;
            if ((0 < nx && nx < N) && (0 < ny && ny < M) && lake[nx][ny] == 'W'){
                dfs(nx, ny, lake, N, M);
            }
        }
    }
    return ;
}

int main(){
    int N, M, count = 0;
    cin >> N;
    cin >> M;
    char **lake = (char**)malloc(N * sizeof(char*));
    lake[0] = (char*)malloc(N * M * sizeof(char));
    for (int i = 0; i < N; i++) lake[i] = lake[0] + i * M;
    // lake = new char*[N];
    // for (int i = 0; i < N; i++) lake[i] = new char[M];
    // // make lake
    for (int j = 0; j < M; j++){
        for (int i = 0; i < N; i++) cin >> lake[i][j];
    }

    for (int j = 0; j < M; j++){
        for (int i = 0; i < N; i++){
            if (lake[i][j] == 'W'){
                dfs(i, j, lake, N, M);
                count += 1;
            }
        }
    }
    cout << count << endl;

    // for (int i = 0; i < N; i++) delete[] lake[i];
    // delete[] lake;
    for (int i = 0; i < N; i++) free(lake[i]);
    free(lake);
    return 0;
}
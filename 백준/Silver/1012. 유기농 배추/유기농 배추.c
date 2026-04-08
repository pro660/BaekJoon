#include <stdio.h>

void dfs(int N, int M, int arr[N][M], int y, int x);

int main(){
    int n; 
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int M, N, K, count = 0;
        scanf("%d %d %d", &M, &N, &K);

        int arr[N][M];

        for(int j=0; j<N; j++){
            for(int k=0; k<M; k++){
                arr[j][k] = 0;
            }
        }

        for(int j=0; j<K; j++){
            int x, y;
            scanf("%d %d", &x, &y);

            arr[y][x] = 1;
        }

        for(int j=0; j<N; j++){
            for(int k=0; k<M; k++){
                if(arr[j][k] == 1){
                    dfs(N, M, arr, j, k);
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }

    return 0;
}

void dfs(int N, int M, int arr[N][M], int y, int x){
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};
    
    arr[y][x] = 0;

    for(int i=0; i<4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];

        if(ny >= 0 && ny < N && nx >= 0 && nx < M && arr[ny][nx] == 1){
            dfs(N, M, arr, ny, nx);
        }
    }
}
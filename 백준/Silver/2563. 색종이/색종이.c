#include <stdio.h>
#define SIZE 100

int main(){
    int arr[SIZE][SIZE] = {0}, n;
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        int x, y;

        scanf("%d %d", &x, &y);

        for(int j=0; j<10; j++){
            for(int k=0; k<10; k++){
                arr[x+j][y+k] = 1;
            }
        }
    }

    int count = 0;

    for(int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE; j++){
            if(arr[i][j] == 1) count++;
        }
    }

    printf("%d", count);
    
    return 0;
}
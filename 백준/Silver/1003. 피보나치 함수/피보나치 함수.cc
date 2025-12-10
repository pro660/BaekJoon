#include <stdio.h>
void fibonacci(int n);

int zero[41] = {0,};
int one[41] = {0,};

int main() {

    int n, num;
    
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        fibonacci(num);
        printf("%d %d\n", zero[num], one[num]);
    }
    
    return 0;
}

void fibonacci(int n) { // 기존에 계산했던 값은 배열에서 꺼내쓰기
    if (n == 0) {
        zero[n] = 1;
        one[n] = 0;
    } else if (n == 1) {
        zero[n] = 0;
        one[n] = 1;
    } else if(zero[n] == 0 && one[n] == 0) {
        fibonacci(n - 1);
        fibonacci(n - 2);
        zero[n] = zero[n - 1] + zero[n - 2];
        one[n] = one[n - 1] + one[n - 2]; // 메모이제이션
    }
}
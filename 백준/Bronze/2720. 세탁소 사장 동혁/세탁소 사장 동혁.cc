#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int exchange[n];  
    for (int i = 0; i < n; i++) {
        scanf("%d", &exchange[i]);
    }

    for (int i = 0; i < n; i++) {
        int countqu = exchange[i] / 25;
        exchange[i] %= 25;

        int countdi = exchange[i] / 10;
        exchange[i] %= 10;

        int countni = exchange[i] / 5;
        exchange[i] %= 5;

        int countpe = exchange[i];  

        printf("%d %d %d %d\n", countqu, countdi, countni, countpe);
    }

    return 0;
}
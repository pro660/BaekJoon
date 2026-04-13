#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    char c[81];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int sum = 0;
        int score = 0;

        scanf("%s", c);

        for (int j = 0; c[j] != '\0'; j++) {
            if (c[j] == 'O') {
                score++;
                sum += score;
            } else {
                score = 0;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}
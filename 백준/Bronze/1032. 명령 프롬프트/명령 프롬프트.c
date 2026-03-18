#include <stdio.h>
#include <string.h>

#define MAX_SIZE 51

int main() {
    char str1[MAX_SIZE], str2[MAX_SIZE];
    int n;

    scanf("%d", &n);

    if(n < 1 || n > 50) {
        printf("Invalid input. n should be between 1 and 50.\n");
        return 1;
    }
    else {
        for(int i=0; i<n; i++) {
            scanf("%s", str1);
            if(i == 0) {
                strcpy(str2, str1);
            }
            for(int j=0; str1[j] != '\0'; j++) {
                if(str1[j] != str2[j]){
                    str2[j] = '?';
                }
            }
        }
    }

    printf("%s", str2);
    return 0;
}
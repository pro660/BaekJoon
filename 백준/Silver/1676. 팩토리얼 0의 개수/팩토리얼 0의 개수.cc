#include <stdio.h>

int main() {
    
    int n, sum=1, cnt=0, five=5;
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
        sum *= i;

    while((n/five)!=0){
        cnt += n/five;
        five *= 5;
    }

    printf("%d", cnt);
    return 0;
}
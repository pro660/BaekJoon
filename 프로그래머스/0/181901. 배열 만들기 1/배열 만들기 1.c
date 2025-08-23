#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n, int k) {
    int* answer = (int*)malloc(sizeof(int)*(n/k));
    int j=0;
    
    for(int i=k; i<=n; i+=k)
        answer[j++] = i;
    
    return answer;
}
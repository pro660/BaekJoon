#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int start_num, int end_num) {
    
    int* answer = (int*)malloc(sizeof(int)*start_num-end_num);
    int j=0;
    
    for(int i=start_num; i>=end_num; i--)
        answer[j++] = i;
    
    return answer;
}
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0, i;
    int result1=0, result2=0;
    
    for(i=0; i<num_list_len; i+=2)
        result1+=num_list[i];
    for(i=1; i<num_list_len; i+=2)
        result2+=num_list[i];
        
    if(result1>result2)
        answer = result1;
    else if(result1<result2)
        answer = result2;
    else
        answer = result1;
    return answer;
}
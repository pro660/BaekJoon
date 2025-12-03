#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int i=1;
    while(true){
        if((n%i)==1){
            answer = i;
            break;
        }   
        i++;
    }
    return answer;
}
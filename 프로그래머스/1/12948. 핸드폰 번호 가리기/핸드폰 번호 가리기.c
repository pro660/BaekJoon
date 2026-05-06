#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* phone_number) {
    int len = strlen(phone_number);
    char* answer = (char*)malloc(len + 1);

    for (int i = 0; i < len - 4; i++) {
        answer[i] = '*';
    }

    for (int i = len - 4; i < len; i++) {
        answer[i] = phone_number[i];
    }

    answer[len] = '\0';

    return answer;
}
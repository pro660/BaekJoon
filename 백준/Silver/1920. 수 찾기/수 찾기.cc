#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100000

// qsort 비교 함수
int compare(const void *a, const void *b) {
    int int_a = *(int*)a;
    int int_b = *(int*)b;
    if (int_a < int_b) return -1;
    if (int_a > int_b) return 1;
    return 0;
}

// 이진 탐색 함수 (최적화)
int binsearch(int *arr, int n, int target) {
    int left = 0, right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) return 1;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    
    return 0;
}

int main() {
    int n, m, i, target;
    int arr[MAX_SIZE];

    // 배열 크기 입력
    scanf("%d", &n);
    
    // 배열 입력
    for (i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    // 배열 정렬
    qsort(arr, n, sizeof(int), compare);

    // 찾을 숫자 개수 입력
    scanf("%d", &m);

    // 각 숫자 탐색 및 출력
    for (i = 0; i < m; i++) {
        scanf("%d", &target);
        printf("%d\n", binsearch(arr, n, target));
    }

    return 0;
}
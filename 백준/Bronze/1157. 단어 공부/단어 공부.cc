#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char a[1000001];
    int count[26] = {0}; // 알파벳 개수를 세기 위한 배열
    cin >> a;

    int len = strlen(a);

    for (int i = 0; i < len; i++) {
        if (isalpha(a[i])) { // 문자가 알파벳인지 확인
            char upperChar = toupper(a[i]); // 대문자로 변환
            count[upperChar - 'A']++; // 해당 알파벳의 개수 증가
        }
    }

    int maxCount = 0;
    char maxChar = '?';
    for (int i = 0; i < 26; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxChar = 'A' + i;
        } else if (count[i] == maxCount) {
            maxChar = '?'; // 가장 많이 등장하는 문자가 여러 개일 경우
        }
    }

    cout << maxChar;
    return 0;
}
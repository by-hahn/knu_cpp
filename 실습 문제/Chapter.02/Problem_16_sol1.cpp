// (명품) C++ Programming 황기태 저. 생능, 2018
// ISBN::9788970509433

// 2장 (Chapter.02) 실습문제
// Problem.16

// 영문 텍스트를 입력받아 알파벳 히스토그램을 그리는 문제.
// 대문자는 모두 소문자로 집계, 텍스트의 끝은 ';'. (cin.getline(buf, 10000, ';')와 tolower(char c), isalpha(char c) 함수를 이용하라.)
// tolower와 isalpha 함수 이용하지 않는 간단 풀이.

#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char buf[10000];
    char alphabet[26] = { 0 };
    int total = 0;

    cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n";
    cin.getline(buf, 10000, ';');
    for (int i = 0; i < strlen(buf); i++) { // 알파벳만 따지는 것이므로 strlen(buf)번만 for문 돌리면 (null 문자까지 따질 필요는..)
        if ('a' <= buf[i] && buf[i] <= 'z') { // 아스키코드로 비교. => isalpha 굳이 사용하지 않아도..
            alphabet[buf[i] - 'a']++; // (buf[i] -'a') 번쨰 자리에 알파벳 카운트 1 up.
        }
        if ('A' <= buf[i] && buf[i] <= 'Z') { // 아스키코드로 비교.
            alphabet[buf[i] - 'A']++; // (buf[i] -'A') 번째 자리에 알파벳 카운트 1 up. (tolower 함수 이용 안 하는 솔루션)
        }
    }

    // 저장된 alphabet[t]의 개수를 int total에 누적 합 (0번 자리:'a'의 개수, 25번 자리:'z'의 개수)
    for (int t = 0; t < 26; t++) {
        total += alphabet[t];
    }
    cout << "총 알파벳 수 " << total << "\n\n";

    // 출력 파트
    for (int j = 0; j < 26; j++) {
        cout << char('a' + j) << " (" << int(alphabet[j]) << ")" << "\t: "; // char('a' + j) ->아스키코드를 알파벳으로 변환. int(alphabet[j]) (*중요)
        for (int k = 0; k < alphabet[j]; k++) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

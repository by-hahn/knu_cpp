// (명품) C++ Programming 황기태 저. 생능, 2018
// ISBN::9788970509433

// 2장 (Chapter.02) 실습문제
// Problem.16

// 영문 텍스트를 입력받아 알파벳 히스토그램을 그리는 문제.
// 대문자는 모두 소문자로 집계, 텍스트의 끝은 ';'. (cin.getline(buf, 10000, ';')와 tolower(char c), isalpha(char c) 함수를 이용하라.)
// 교재가 원하는 풀이?

#include <iostream>
#include <cstring>
#include <cctype> // tolower와 isalpha 함수를 사용하기 위한 cctype 헤더.
using namespace std;
int main() {
    char buf[10000];
    char alphabet[26] = { 0 };
    int total = 0;

    cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n";
    cin.getline(buf, 10000, ';');

    for (int i = 0; i < strlen(buf); i++) {
        if (isalpha(buf[i])) { // isalpha 함수로 알파벳인지 확인
            char lowercase = tolower(buf[i]); // tolower 함수로 소문자로 변환
            alphabet[lowercase - 'a']++; // 소문자로 변환된 문자를 인덱스로 사용
        }
    }

    // 저장된 alphabet[t]의 개수를 int total에 누적 합
    for (int t = 0; t < 26; t++) {
        total += alphabet[t];
    }
    cout << "총 알파벳 수 " << total << "\n\n";

    // 출력 파트
    for (int j = 0; j < 26; j++) {
        cout << char('a' + j) << " (" << int(alphabet[j]) << ")" << "\t: ";
        for (int k = 0; k < alphabet[j]; k++) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

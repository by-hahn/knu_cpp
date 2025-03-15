// (명품) C++ Programming 황기태 저. 생능, 2018
// ISBN::9788970509433

// 2장 (Chapter.02) 실습문제
// Problem.5

#include <iostream>
using namespace std;
int main() {
    cout << "문자들을 입력하라(100개 미만).\n";
    char str[100];
    cin.getline(str, 100, '\n'); // <Enter> 키가 입력될 때까지 문자 입력 받음. & 최대 99자.

    int i = 0, count = 0; // x의 개수를 세는 변수 count 
    while (str[i] != '\0') { // cin.getline()은 입력받은 문자열 끝에 ‘\0’를 붙임.
        if (str[i] == 'x') {
            count++;
        }
        i++;
    }
    cout << "x의 개수는 " << count;
    return 0;
}

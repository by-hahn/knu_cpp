// (명품) C++ Programming 황기태 저. 생능, 2018
// ISBN::9788970509433

// 2장 (Chapter.02) 실습문제
// Problem.7

// 공백 포함 문자열 대조 문제. (공백 없는 문자열 문제는 Chapter.02/Problem.6)

#include <iostream>
using namespace std;
int main() {
    while (true) {
        cout << "종료하고싶으면 yes를 입력하세요>>";
        char str[100];
        cin.getline(str, 100, '\n');
        if (strcmp(str, "yes") == 0) {
            break;
        }
    }

    cout << "종료합니다...";
    return 0;
}

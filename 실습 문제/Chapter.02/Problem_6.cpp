// (명품) C++ Programming 황기태 저. 생능, 2018
// ISBN::9788970509433

// 2장 (Chapter.02) 실습문제
// Problem.6

// 공백 없는 문자열 대조 문제. (공백 포함 문자열 문제는 Chapter.02/Problem.7)

#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char password[100], password_check[100];
    
    cout << "새 암호를 입력하세요>>";
    cin >> password;
    cout << "새 암호를 다시 한 번 입력하세요>>";
    cin >> password_check;

    if (strcmp(password, password_check) == 0) {
        cout << "같습니다";
    }
    else {
        cout << "같지 않습니다";
    }
    return 0;
}

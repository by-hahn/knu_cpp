// (명품) C++ Programming 황기태 저. 생능, 2018
// ISBN::9788970509433

// 2장 (Chapter.02) 실습문제
// Problem.13

// 중식당 메뉴 주문 - 메뉴, 사람 수 입력받고 출력.(잘못된 입력을 가려낼 수 있어야 함.)
// 잘못된 입력을 가려내는 부분은 정답이 없는 문제.

#include <iostream>
using namespace std;

int main() {
    cout << "***** 승리장에 오신 것을 환영합니다. *****\n";

    int menu = 0, dish;
    float intCheck_m, intCheck_d; // 입력 값이 정수가 맞는지 확인용.
    while (menu != 4) {
        cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>  "; // switch문을 사용하면 좋겠다.
        if (!(cin >> intCheck_m)) { // 문자가 입력된다면
            cout << "숫자가 아닙니다.\n";
            cin.clear(); // 입력 스트림 초기화
            cin.ignore(100, '\n'); // 잘못된 입력 제거
            continue;
        }

        // 1,2,3,4 중에 선택했는지.
        if (intCheck_m != 1 && intCheck_m != 2 && intCheck_m != 3 && intCheck_m != 4) { // 입력값이 1도, 2도, 3도 ,4도 아니라면..
            cout << "다시 주문하세요!!\n";
            continue;
        }

        menu = intCheck_m; // 입력값(intCheck_m)이 1,2,3,4 중에 하나였다면. menu로 값 넘겨줌.
        // menu == 4이면 바로 종료.
        if (menu == 4) {
            break;
        }
        // '인분'(접시 수)이 양의 정수인지.
        while (true) { // 자연수 입력 받지 않으면 무한 루프
            cout << "몇인분?";
            cin >> intCheck_d;
            dish = intCheck_d;
            if (dish != intCheck_d) {
                cout << "정수를 입력하세요.\n";
            }
            else if (dish == intCheck_d) {
                if (dish < 1) { // 입력값이 정수였더라도 자연수가 아니면 다시 루프
                    cout << "자연수를 입력하세요.\n";
                    continue;
                }
                break;
            }
        }
        // 출력 파트
        switch (menu) {
        case 1:
            cout << "짬뽕 " << dish << "인분 나왔습니다\n";
            break;
        case 2:
            cout << "짜장 " << dish << "인분 나왔습니다\n";
            break;
        case 3:
            cout << "군만두 " << dish << "인분 나왔습니다\n";
            break;
        }

    }
    cout << "오늘 영업은 끝났습니다.";
    return 0;
}

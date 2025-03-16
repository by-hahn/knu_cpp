// (명품) C++ Programming 황기태 저. 생능, 2018
// ISBN::9788970509433

// 2장 (Chapter.02) 실습문제
// Problem.14

// 커피 주문하는 프로그램. 20000원 이상 벌게 된다면 카페를 닫는다. (if(strcmp(coffee, "에스프레소")==0) 이용.)

#include <iostream>
using namespace std;
int main() {
    cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.\n";

    char coffee[100];
    int num, sum = 0;
    while (sum < 20000) { // 판매액이 20000원 미만일 동안
        cout << "주문>> ";
        cin >> coffee >> num; // 주문 형식 '에스프레소 4'(교재)

        if (strcmp(coffee, "에스프레소") == 0) { // coffee에 입력된 문자열이 '에스프레소'라면. (strcmp는 두 문자열이 같으면 0을 반환함.)
            sum += 2000 * num;
            cout << 2000 * num << "원입니다. 맛있게 드세요\n";
        }
        else if (strcmp(coffee, "아메리카노") == 0) {
            sum += 2300 * num;
            cout << 2300 * num << "원입니다. 맛있게 드세요\n";
        }
        else if (strcmp(coffee, "카푸치노") == 0) {
            sum += 2500 * num;
            cout << 2500 * num << "원입니다. 맛있게 드세요\n";
        }
    }
    
    cout << "오늘 " << sum << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~";
    return 0;
}

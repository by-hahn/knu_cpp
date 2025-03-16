// (명품) C++ Programming 황기태 저. 생능, 2018
// ISBN::9788970509433

// 2장 (Chapter.02) 실습문제
// Problem.15

// 정수 5칙연산(덧셈,뺄셈,곱셈,나눗셈,나머지) 프로그램 작성하는 문제. 
// (식 입력 형식 '2 + 34', '77 / 2' - 정수와 연산자는 하나의 빈칸으로 분리한다.)
// 그냥 간단하게 내 방식대로 풀이 (교재가 원하는 atoi() 함수 활용은 Problem_15_sol2.cpp 참고.)

#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    char oper;
    while (true) { // 교재에 루프 빠져나오는 조건이 없음..
        cout << "? ";
        cin >> num1 >> oper >> num2;
        switch (oper) {
        case '+':
            cout << num1 << " " << oper << " " << num2 << " = " << num1 + num2 << "\n";  // " " << oper << " " 대신에 그냥 " + " 이용해도 되긴함.
            break;
        case '-':
            cout << num1 << " " << oper << " " << num2 << " = " << num1 - num2 << "\n";
            break;
        case '*':
            cout << num1 << " " << oper << " " << num2 << " = " << num1 * num2 << "\n";
            break;
        case '/':
            cout << num1 << " " << oper << " " << num2 << " = " << num1 / num2 << "\n";
            break;
        case '%':
            cout << num1 << " " << oper << " " << num2 << " = " << num1 % num2 << "\n";
            break;
        }
    }
    return 0;
}

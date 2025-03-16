// (명품) C++ Programming 황기태 저. 생능, 2018
// ISBN::9788970509433

// 2장 (Chapter.02) 실습문제
// Problem.15

// 정수 5칙연산(덧셈,뺄셈,곱셈,나눗셈,나머지) 프로그램 작성하는 문제. 
// (식 입력 형식 '2 + 34', '77 / 2' - 정수와 연산자는 하나의 빈칸으로 분리한다.)

// 교재가 원하는 풀이? (atoi() 함수 이용) 
// Chapter.02, Problem_08.cpp과 느낌 비슷하게..?

#include <iostream>
using namespace std;
int main() {
    char equation[100];
    int num1, num2;

  
    while (true) { // 교재에 루프 빠져나오는 조건이 없음..
        cout << "? ";
        
        cin.getline(equation, 100, ' '); // 첫 숫자와 연산자 사이를 ' '으로 구분.(첫 숫자 저장)
        num1 = atoi(equation);

        cin.getline(equation, 100, ' '); // 연산자와 두 번째 숫자 사이를 ' '으로 구분.(연산자 저장)
        switch (equation[0]) { // equation이 아니라 equation[0] 적어야함.(*주의)
        case '+':
            cin.getline(equation, 100, '\n'); // 마지막에는 <Enter> 키 입력으로.
            num2 = atoi(equation);
            cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
            break;
        case '-':
            cin.getline(equation, 100, '\n'); // 마지막에는 <Enter> 키 입력으로.
            num2 = atoi(equation);
            cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
            break;
        case '*':
            cin.getline(equation, 100, '\n'); // 마지막에는 <Enter> 키 입력으로.
            num2 = atoi(equation);
            cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
            break;
        case '/':
            cin.getline(equation, 100, '\n'); // 마지막에는 <Enter> 키 입력으로.
            num2 = atoi(equation);
            cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
            break;
        case '%':
            cin.getline(equation, 100, '\n'); // 마지막에는 <Enter> 키 입력으로.
            num2 = atoi(equation);
            cout << num1 << " % " << num2 << " = " << num1 % num2 << "\n";
            break;
        }
    }
    return 0;
}

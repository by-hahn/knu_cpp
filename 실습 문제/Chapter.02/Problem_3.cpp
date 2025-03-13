// (명품) C++ Programming 황기태 저. 생능, 2018
// ISBN::9788970509433

// 2장 (Chapter.02) 실습문제
// Problem.3

#include <iostream>
using namespace std;
int main() {
	cout << "두 수를 입력하라>>";
	int num1, num2;
	cin >> num1 >> num2;

	if (num1 >= num2) {
		std::cout << "큰 수 = " << num1;
	}
	else if (num1 < num2) {
		std::cout << "큰 수 = " << num2;
	}
	return 0;
}
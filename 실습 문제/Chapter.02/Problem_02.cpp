// (명품) C++ Programming 황기태 저. 생능, 2018
// ISBN::9788970509433

// 2장 (Chapter.02) 실습문제
// Problem.2

// 구구단 출력 문제.(cout, << 연산자 활용. 세로줄 별로 각각 1단, 2단, 3단...)

#include <iostream>
int main() {
	for (int i = 1; i <= 9; i++) {
		for (int k = 1; k <= 9; k++) {
			std::cout << k << "x" << i << "=" << k * i << "\t";
		}
		std::cout << "\n";
	}
	return 0;
}

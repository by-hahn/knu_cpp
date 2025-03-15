// (명품) C++ Programming 황기태 저. 생능, 2018
// ISBN::9788970509433

// 1장 (Chapter.01) 실습문제
// Problem.4

// 4층 별 찍기 문제.(왼쪽 정렬)

#include <iostream>
int main() {
	for (int i = 1; i <= 4; i++) {
		for (int k = 1; k <= i; k++) {
			std::cout << "*";
		}
		std::cout << "\n";
	}
	return 0;
}

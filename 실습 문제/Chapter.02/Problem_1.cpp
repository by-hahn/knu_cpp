// (명품) C++ Programming 황기태 저. 생능, 2018
// ISBN::9788970509433

// 2장 (Chapter.02) 실습문제
// Problem.1

#include <iostream>
int main() {
	for (int i = 1; i <=100 ; i++) {
		if (i % 10 != 0) {
			std::cout << i << "\t";
		}
		else if (i % 10 == 0) {
			std::cout << i << "\n";
		}
	}
	return 0;
}
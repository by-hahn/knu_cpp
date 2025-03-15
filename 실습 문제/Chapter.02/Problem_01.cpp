// (명품) C++ Programming 황기태 저. 생능, 2018
// ISBN::9788970509433

// 2장 (Chapter.02) 실습문제
// Problem.1

// 1부터 100까지의 정수를 한 줄에 10개씩 출력하는 문제. (cout, << 활용, 각 정수는 탭으로 분리)

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

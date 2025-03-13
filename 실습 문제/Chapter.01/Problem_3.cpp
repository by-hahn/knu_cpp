// (명품) C++ Programming 황기태 저. 생능, 2018
// ISBN::9788970509433

// 1장 (Chapter.01) 실습문제
// Problem.3

#include <iostream>
int main() {
	int sum = 0;
	for (int i = 1; i <= 10; i++) {
		sum += i;
	}
	std::cout << "1에서 10까지 더한 결과는 " << sum << "입니다";
	return 0;
}
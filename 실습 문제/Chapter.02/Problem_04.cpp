// (명품) C++ Programming 황기태 저. 생능, 2018
// ISBN::9788970509433

// 2장 (Chapter.02) 실습문제
// Problem.4

// 소수점을 가지는 5개의 실수 중 제일 큰 수를 출력하는 문제.

#include <iostream>
using namespace std;
int main() {
	cout << "5 개의 실수를 입력하라>>";
	float num1, num2, num3, num4, num5;
	cin >> num1 >> num2 >> num3 >> num4 >> num5;
	float arr[5] = { num1, num2, num3, num4, num5 };
	float max = arr[0];

	for (int i = 1; i <= 4; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	cout << "제일 큰 수 = " << max;
	return 0;
}

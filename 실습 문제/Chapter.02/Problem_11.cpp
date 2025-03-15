// (명품) C++ Programming 황기태 저. 생능, 2018
// ISBN::9788970509433

// 2장 (Chapter.02) 실습문제
// Problem.11

// 교재의 C 프로그램을 C++ 프로그램으로 수정하는 문제.

#include <iostream>
using namespace std;
int main() {
	int k, n = 0, sum = 0;
	cout << "끝 수를 입력하세요>>";
	cin >> n;
	for (k = 1; k <= n; k++) {
		sum += k;
	}
	cout << "1에서 " << n << "까지의 합은 " << sum << "입니다.\n";
	return 0;
}

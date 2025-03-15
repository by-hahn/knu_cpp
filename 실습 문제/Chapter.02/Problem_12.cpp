// (명품) C++ Programming 황기태 저. 생능, 2018
// ISBN::9788970509433

// 2장 (Chapter.02) 실습문제
// Problem.12

// 교재의 C 프로그램을 C++ 프로그램으로 수정하는 문제.(with 함수)

#include <iostream>
using namespace std;
int sum(int a, int b); // C++은 함수의 원형 선언 시, 매개 변수를 모두 선언해야 함. (*중요)

int main() {
	int n = 0;
	cout << "끝 수를 입력하세요>>";
	cin >> n;
	cout << "1에서 " << n << "까지의 합은 " << sum(1, n) << "입니다.\n";
	return 0;
}

int sum(int a, int b) {
	int k, res = 0;
	for (k = a; k <= b; k++) {
		res += k;
	}
	return res;
}

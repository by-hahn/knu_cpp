// (명품) C++ Programming 황기태 저. 생능, 2018
// ISBN::9788970509433

// 2장 (Chapter.02) 실습문제
// Problem.10

// 입력받은 문자열을 부분문자열로 다시 출력하는 문제.

#include <iostream>
using namespace std;
int main() {
	char str[100], output[100];
	cout << "문자열 입력>>";
	cin.getline(str, 100, '\n');

	for (int i = 0; i < strlen(str); i++) {
		output[i] = str[i]; // 한 번에 하나씩 str에서 output으로 옮겨 적음.(for문, i++)
		output[i + 1] = '\0'; // 문자열 종료 나타내기 위해 (i + 1) 자리에 null 문자 저장. 
		cout << output << '\n';
	}
	return 0;
}

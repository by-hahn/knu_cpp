// (명품) C++ Programming 황기태 저. 생능, 2018
// ISBN::9788970509433

// 2장 (Chapter.02) 실습문제
// Problem.9

// 이름,주소,나이를 입력받아 다시 출력하는 문제(문자열 내 빈칸 포함.) 

#include <iostream>
using namespace std;
int main() {
	char name[100], address[100];
	int age;
	cout << "이름은?"; // '황 기 태'
	cin.getline(name, 100, '\n');
	cout << "주소는?"; // '서울시 안녕구 사랑동 해피아파트'
	cin.getline(address, 100, '\n');
	cout << "나이는?"; // '21'
	cin >> age;

	cout << name << ", " << address << ", " << age << "세";
	return 0;
}

// (명품) C++ Programming 황기태 저. 생능, 2018
// ISBN::9788970509433

// 2장 (Chapter.02) 실습문제
// Problem.8

// 루프& cin.getline()으로 5개의 이름 구분하여 입력 받기.(한 라인에 입력, ';'으로 이름 구분)
// 이름 각각 출력, 가장 긴 이름을 판별하는 문제.

#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char name[100], longest[100];
	int maxLen = 0;

	cout << "5 명의 이름을 ';'으로 구분하여 입력하세요\n>>"; // 'Mozart;Elvis Presley;Jim Carry;Schubert;Dominggo;'
	for (int i = 0; i <= 4; i++) {
		cin.getline(name, 100, ';');
		cout << i + 1 << " : " << name << "\n";

		if (strlen(name) > maxLen) { // 동일한 길이의 이름일 때에 대응하는 코드가 없어서 아쉽지만.. 문제에서 이야기하지 않으므로 여기까지만.
			maxLen = strlen(name);
			for (int j = 0; j <= strlen(name); j++) { // longest 문자열 끝에 '\0'(종료 문자)까지 넣기 위해, (strlen(name) + 1) 번 반복. (*중요)
				longest[j] = name[j];
			}
		}
	}
	cout << "가장 긴 이름은 " << longest;
	return 0;
}

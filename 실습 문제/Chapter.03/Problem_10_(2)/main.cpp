#include<iostream>
#include "Problem10_2.h"
using namespace std;

int main() {
	Add a;
	Sub s;
	Mul m;
	Div d;
	int x, y;
	char c;

	while (true) {
		cout << "두 정수와 연산자를 입력하세요>>";
		cin >> x >> y >> c;
		if (c == '+') {
			a.setValue(x, y);
			cout << a.calculate() << '\n';
		}
		else if (c == '-') {
			s.setValue(x, y);
			cout << s.calculate() << '\n';
		}
		else if (c == '*') {
			m.setValue(x, y);
			cout << m.calculate() << '\n';
		}
		else if (c == '/') {
			d.setValue(x, y);
			cout << d.calculate() << '\n';
		}
	}
}

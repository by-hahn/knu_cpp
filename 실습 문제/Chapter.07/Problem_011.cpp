#include<iostream>
using namespace std;

class Stack {
private:
	int stack[3], top;
public:
	Stack() { top = 0; }
	Stack& operator<< (int num) {
		stack[top] = num;
		top++;
		return *this;
	}
	bool operator! () {
		if (top)
			return false;
		return true;
	}
	Stack operator>> (int& x) {
		x = stack[top - 1];
		top--;
		return *this;
	}
};

int main() {
	Stack stack;
	stack << 3 << 5 << 10; // 3,5,10을 순서대로 푸시
	while (true) {
		if (!stack) break; // 스택 empty
		int x;
		stack >> x; // 스택의 탑에 있는 정수 팝
		cout << x << ' ';
	}
	cout << endl;
}

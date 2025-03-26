//Problem 7

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class Problem7 {
	int num;
public:
	Problem7(int temp);
	int next();
	int nextInRange(int a, int b);
};
Problem7::Problem7(int temp) {
	num = temp;
	srand((unsigned)time(0));
}
int Problem7::next() {
	int ran = rand();
	if (num % 2 == 0) {
		if (ran % 2 == 0)
			return ran;
		else
			return --ran;
	}
	else {
		if (ran % 2 == 0)
			return ++ran;
		else
			return ran;
	}
}
int Problem7::nextInRange(int a, int b) {
	int ran = rand() % (b - a + 1) + a;
	if (num % 2 == 0) {
		if (ran % 2 == 0)
			return ran;
		else
			return ++ran;
	}
	else {
		if (ran % 2 == 0)
			return ++ran;
		else
			return ran;
	}
}

int main() {
	Problem7 r1(0);
	cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10 개--\n";
	for (int i = 0; i < 10; i++) {
		int n = r1.next();
		cout << n << ' ';
	}

	Problem7 r2(1); // 홀수 랜덤 정수 발생
	cout << "\n\n-- 2에서 " << "9 까지의 랜덤 홀수 정수 10 개 --\n";
	for (int i = 0; i < 10; i++) {
		int n = r2.nextInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}

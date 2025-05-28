#include <iostream>
using namespace std;

template<class T>
T* concat(T a[], int sizea, T b[], int sizeb) {
	T* p = new T[sizea + sizeb];
	for (int i = 0; i < sizea; i++)
		p[i] = a[i];
	for (int i = 0; i < sizeb; i++)
		p[i + sizea] = b[i];

	return p;
}

int main() {
	cout << "두 개의 정수 배열을 합칩니다" << endl;

	int x[] = { 1,2,3 };
	int y[] = { 6,7,8,9 };
	int* p = concat(x, 3, y, 4);
	for (int i = 0; i < 7; i++)
		cout << p[i] << ' ';

	cout << endl;
	delete[] p;

	cout << "두 개의 문자 배열을 합칩니다" << endl;

	char a[] = { 'H', 'e', 'l', 'l', 'o' };
	char b[] = { 'k', 'i', 't', 't', 'y' };
	char* q = concat(a, 5, b, 5);
	for (int i = 0; i < 10; i++)
		cout << q[i] << ' ';

	cout << endl;
	delete[] q;
}

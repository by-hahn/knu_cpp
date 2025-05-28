#include <iostream>
using namespace std;

template <class T>
void reverseArray(T arr[], int n) {
	for (int i = 0; i < n / 2; i++) {
		T tmp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = tmp;
	}
}
int main() {
	int x[] = { 1,10,100,5,4 };
	for (int i = 0; i < 5; i++) cout << x[i] << ' ';
	cout << endl;

	reverseArray(x, 5);
	for (int i = 0; i < 5; i++) cout << x[i] << ' ';
}

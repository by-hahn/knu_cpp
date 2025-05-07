#include<iostream>
using namespace std;

class Color {
private:
	int red, green, blue;
public:
	Color() { ; }
	Color(int a, int b, int c) { red = a; green = b; blue = c; }
	void show() { cout << red << ' ' << green << ' ' << blue << endl; }
	friend Color operator+ (Color a, Color b);
	friend bool operator== (Color a, Color b);
};

Color operator+ (Color a, Color b) {
	Color c;
	c.red = a.red + b.red;
	c.green = a.green + b.green;
	c.blue = a.blue + b.blue;
	return c;
}

bool operator== (Color a, Color b) {
	if (a.red == b.red && a.green == b.green && a.blue == b.blue)
		return true;
	return false;
}

int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show(); // 색 값 출력

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "보라색 맞음";
	else
		cout << "보라색 아님";
}

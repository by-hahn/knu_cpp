#include<iostream>
using namespace std;

class Color {
private:
	int red, green, blue;
public:
	Color() { ; }
	Color(int a, int b, int c) { red = a; green = b; blue = c; }
	void show() { cout << red << ' ' << green << ' ' << blue << endl; }
	Color operator+ (Color b);
	bool operator== (Color a);
};

Color Color::operator+ (Color b) {
	Color a;
	a.red = this->red + b.red;
	a.green = this->green + b.green;
	a.blue = this->blue + b.blue;
	return a;
}

bool Color::operator== (Color a) {
	if (this->red == a.red && this->green == a.green && this->blue == a.blue)
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

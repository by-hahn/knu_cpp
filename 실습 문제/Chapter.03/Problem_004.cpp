//Problem 4

#include<iostream>
using namespace std;

class CoffeeMachine {
	int coffee, water, sugar;
public:
	CoffeeMachine(int a, int b, int c);
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee();
	void fill();
	void show();

};

CoffeeMachine::CoffeeMachine(int a, int b, int c) {
	coffee = a;
	water = b;
	sugar = c;
}
void CoffeeMachine::drinkEspresso() {
	coffee--;
	water--;
}
void CoffeeMachine::drinkAmericano() {
	coffee--;
	water -= 2;
}
void CoffeeMachine::drinkSugarCoffee() {
	coffee--;
	water -= 2;
	sugar--;
}
void CoffeeMachine::fill() {
	coffee = 10;
	water = 10;
	sugar = 10;
}
void CoffeeMachine::show() {
	cout << "커피 머신 상태, 커피:" << coffee << "\t물:" << water << "\t설탕:" << sugar << '\n';
}

int main() {
	CoffeeMachine java(5, 10, 3); // 커피량:5, 물량:10, 설탕:6 으로 초기화
	java.drinkEspresso(); // 커피 1, 물 1 소비
	java.show(); // 현재 커피 머신의 상태 출력
	java.drinkAmericano(); // 커피 1, 물 2 소비
	java.show(); // 현재 커피 머신의 상태 출력
	java.drinkSugarCoffee(); // 커피 1, 물 2, 설탕 1 소비
	java.show(); // 현재 커피 머신의 상태 출력
	java.fill(); // 커피 10, 물 10, 설탕 10 으로 채우기
	java.show(); // 현재 커피 머신의 상태 출력
}

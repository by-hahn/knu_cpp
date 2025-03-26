//Problem 3

#include<iostream>
#include<string>
using namespace std;

class Account {
private:
	string name;
	int id, money;
public:
	Account(string s, int a, int b);
	void deposit(int a);
	string getOwner();
	int withdraw(int a);
	int inquiry();

};

Account::Account(string s, int a, int b) {
	name = s;
	id = a;
	money = b;
}
void Account::deposit(int a) {
	money += a;
}
string Account::getOwner() {
	return name;
}
int Account::withdraw(int a) {
	money -= a;
	return a;
}
int Account::inquiry() {
	return money;
}

int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << '\n';
	int money = a.withdraw(20000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << '\n';
}

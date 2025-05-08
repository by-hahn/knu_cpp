// 상속에 관한 문제
//Calculator클래스; 부모클래스, Add클래스; 자식클래스, Multiply클래스; 자식클래스
//두 개의 숫자의 덧셈과 곱셈을 수행하는 코드를 작성하시오

#include <iostream>
using namespace std;

class Calculator {
protected: // 자식클래스에서 접근이 가능하도록 protected를 이용. public을 이용해도 현재의 코드에서는 문제가 없지만 외부에서 변수에 접근가능해져서 위험
    int a, b;
public:
    void set(int a, int b) {
        this->a = a; this->b = b;
    }
};

class Add : public Calculator {
public:
    void add() {
        cout << a << "+" << b << "=" << a + b << endl;
    }
};

class Multiply : public Calculator {
public:
    void multiply() {
        cout << a << "x" << b << "=" << a * b << endl;
    }
};



int main()
{
    int x = 2;
    int y = 3;

    Add add_;
    add_.set(x, y);
    add_.add();

    Multiply mul_;
    mul_.set(x, y);
    mul_.multiply();

  
    return 0;
}

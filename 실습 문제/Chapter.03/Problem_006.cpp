//Problem 6

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class Problem6 {
public:
    Problem6();
    int next();
    int nextInRange(int a, int b);
};
Problem6::Problem6() {
    srand((unsigned)time(0));
}
int Problem6::next() {
    int ran = rand();
    if (ran % 2 == 0) return ran;
    else return --ran;
}
int Problem6::nextInRange(int a, int b) {
    int ran = rand() % (b - a + 1) + a;
    if (ran % 2 == 0) return ran;
    else return --ran;
}

int main() {
    Problem6 r;
    cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--\n";
    for (int i = 0; i < 10; i++) {
        int n = r.next();
        cout << n << ' ';
    }
    cout << "\n\n-- 2에서 10 까지의 랜덤 정수 10 개 --\n";
    for (int i = 0; i < 10; i++) {
        int n = r.nextInRange(2, 10);
        cout << n << ' ';
    }
    cout << endl;
}

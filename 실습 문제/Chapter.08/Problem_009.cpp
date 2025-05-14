#include <iostream>
#include <string>
using namespace std;

class Console {
public:
    static int select_menu() {
        cout << "예약:1, 취소:2, 보기:3, 끝내기:4>> ";
        int menu;
        cin >> menu;
        return menu;
    }

    static int select_time() {
        cout << "07시:1, 12시:2, 17시:3>> ";
        int time;
        cin >> time;
        return time;
    }

    static int input_seat_num() {
        cout << "좌석 번호>> ";
        int seat_num;
        cin >> seat_num;
        if (seat_num < 1 || 8 < seat_num) {
            cout << "오류.\n";
            return 0;
        }
        return seat_num;
    }

    static string input_name() {
        cout << "이름 입력>> ";
        string name;
        cin >> name;
        return name;
    }
};

class Seat {
    string name;

public:
    Seat() { name = "---"; }
    void set_name(string name) { this->name = name; }
    void reset_name() { name = "---"; }
    string show_name() { return name; }
};

class Schedule {
    Seat* seat;
    string scname;
    string person_name;

public:
    Schedule() { seat = new Seat[8]; }
    ~Schedule() { delete[] seat; }
    void set_scname(string scname) { this->scname = scname; }
    void show_schedule() {
        cout << this->scname << "시:";
        for (int i = 0; i < 8; i++)
            cout << "\t" << seat[i].show_name();
        cout << endl;
    }
    void set_resv(int seat_num, string person_name) {
        if (seat[seat_num - 1].show_name() != "---")
            cout << "이미 예약된 자리입니다.\n";
        else
            seat[seat_num - 1].set_name(person_name);
    }
    void cancel_resv(int seat_num, string person_name) {
        if (seat[seat_num - 1].show_name() == "---") {
            cout << "이미 비어있는 자리입니다.\n";
            return;
        }
        if (seat[seat_num - 1].show_name() != person_name) {
            cout << "예약된 이름과 일치하지 않습니다.\n";
            return;
        }
        seat[seat_num - 1].reset_name();
    }
};

class AirlineBook {
    Schedule* schedule;
    int menu;
    int time;

public:
    AirlineBook() {
        schedule = new Schedule[3];
        schedule[0].set_scname("07");
        schedule[1].set_scname("12");
        schedule[2].set_scname("17");
    }
    ~AirlineBook() { delete[] schedule; }

    void start() {
        while (1) {
            menu = Console::select_menu();
            if (menu == 1 || menu == 2) {
                time = Console::select_time();
                if (menu == 1) {
                    switch (time) {
                    case 1:
                    case 2:
                    case 3: {
                        schedule[time - 1].show_schedule();
                        int seat_num = Console::input_seat_num();
                        if (seat_num == 0)
                            break;
                        string person_name = Console::input_name();
                        schedule[time - 1].set_resv(seat_num, person_name);
                        break;
                    }
                    default:
                        cout << "오류.\n";
                    }
                }
                else {
                    switch (time) {
                    case 1:
                    case 2:
                    case 3: {
                        schedule[time - 1].show_schedule();
                        int seat_num = Console::input_seat_num();
                        if (seat_num == 0)
                            break;
                        string person_name = Console::input_name();
                        schedule[time - 1].cancel_resv(seat_num, person_name);
                        break;
                    }
                    default:
                        cout << "오류.\n";
                    }
                }
            }
            else if (menu == 3) {
                for (int i = 0; i < 3; i++) {
                    schedule[i].show_schedule();
                }
            }
            else if (menu == 4) {
                cout << "예약 시스템을 종료합니다.";
                exit(0);
            }
            else {
                cout << "오류.\n";
            }
            cout << endl;
        }
    }
};

int main() {
    AirlineBook* air = new AirlineBook();
    cout << "***** 한성항공에 오신것을 환영합니다 *****\n\n";
    air->start();
    delete air;
}

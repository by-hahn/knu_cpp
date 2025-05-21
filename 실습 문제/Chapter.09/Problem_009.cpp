#include <iostream>
#include <string>
using namespace std;

class Printer {
protected:
    string model;
    string manufacturer;
    int printedCount;
    int availableCount;

public:
    Printer(const string& m, const string& mf, int avaCount)
        : model(m), manufacturer(mf),
        printedCount(0), availableCount(avaCount) {}

    virtual ~Printer() {}

    virtual void print(int pages) = 0;
    virtual void show() const = 0;
};

class InkJetPrinter : public Printer {
    int availableInk;

public:
    InkJetPrinter(const string& m, const string& mf,
        int avaCount, int avaInk)
        : Printer(m, mf, avaCount), availableInk(avaInk) {}

    void print(int pages) override {
        if (availableCount >= pages && availableInk >= pages) {
            availableCount -= pages;
            availableInk -= pages;
            printedCount += pages;
            cout << "프린트하였습니다.\n";
        }
        else {
            cout << "용지가 부족하여 프린트할 수 없습니다.\n";
        }
    }

    void show() const override {
        cout << model << " ," << manufacturer
            << " ,인쇄 매수 " << printedCount
            << "장 ,남은 종이 " << availableCount
            << "장 ,남은 잉크 " << availableInk
            << endl;
    }
};

class LaserPrinter : public Printer {
    int availableToner;

public:
    LaserPrinter(const string& m, const string& mf,
        int avaCount, int avaTnr)
        : Printer(m, mf, avaCount), availableToner(avaTnr) {}

    void print(int pages) override {
        if (availableCount >= pages && availableToner >= pages) {
            availableCount -= pages;
            availableToner -= pages;
            printedCount += pages;
            cout << "프린트하였습니다.\n";
        }
        else {
            cout << "용지가 부족하여 프린트할 수 없습니다.\n";
        }
    }

    void show() const override {
        cout << model << " ," << manufacturer
            << " ,인쇄 매수 " << printedCount
            << "장 ,남은 종이 " << availableCount
            << "장 ,남은 토너 " << availableToner
            << endl;
    }
};

int main() {
    Printer* printers[2];
    printers[0] = new InkJetPrinter("Officejet V40", "HP", 5, 10);
    printers[1] = new LaserPrinter("SCX-6x45", "삼성전자", 3, 20);

    cout << "현재 작동중인 2 대의 프린터는 아래와 같다\n";
    cout << "잉크젯 : "; printers[0]->show();
    cout << "레이저 : ";   printers[1]->show();
    cout << endl;

    int choice, pages;
    char cont;
    while (true) {
        cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
        cin >> choice >> pages;

        if (choice < 1 || choice > 2) {
            cout << "잘못 입력하셨습니다.\n\n";
            continue;
        }

        printers[choice - 1]->print(pages);
        printers[0]->show();
        printers[1]->show();

        cout << "계속 프린트 하시겠습니까(y/n)>>";
        cin >> cont;
        if (cont != 'y') break;
        cout << endl;
    }

    delete printers[0];
    delete printers[1];
    return 0;
}

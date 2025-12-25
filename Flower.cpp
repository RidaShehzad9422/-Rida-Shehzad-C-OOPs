#include<iostream>
#include<conio.h>
using namespace std;
class Roses {
protected:
    int rose;
public:
    void in() {
        cout << "Enter roses: ";
        cin >> rose;
    }
    void out() {
        cout << "total roses are = " << rose << endl;
    }
};
class Jasmines {
protected:
    int jasmine;
public:
    void input() {
        cout << "Enter jasmine: ";
        cin >> jasmine;
    }
    void output() {
        cout << "total jasmines are = " << jasmine << endl;
    }
};
class flowers: public Jasmines, public Roses{
protected:
    int totalflowers;
public:
    flowers() {
        totalflowers=0;
    }
    void I() {
    	Roses::in();
    	Jasmines::input();
      totalflowers= rose+jasmine;
    }
    void O() {
    	Roses::out();
    	Jasmines::output();
        cout << "flowers = " << totalflowers << endl;
    }
};
int main() {
    flowers f;
    f.I();
    f.O();
    getch();
}


#include<iostream>
using namespace std;

class Square {
    double height, width;

public:

    Square() {
        height = 5;
        width = 5;
    }

    double get_height() {
        return height;
    }

    double get_width() {
        return width;
    }

    double operator+(int x) {
        return get_height()+x;
    }

};

//double operator+(Square s, int x) {
    //return s.get_height() + x;
}

int main() {
    Square gre{};
   // double a = gre + 5;
    //cerr << a << endl;
   // double c = operator+(gre,5);
   // cerr << c << endl;
    double b = gre.operator+(5);
    cerr << b << endl;
}
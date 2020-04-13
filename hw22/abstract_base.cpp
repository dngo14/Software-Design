#include <iostream>
using namespace std;

class bird {
    int weight;
    int height;

    public:

    bird(int w, int h) {
        weight = w;
        height = h;
    }

    int get_weight() {
        return weight;
    }

    int get_height() {
        return height;
    }

    virtual void display() = 0;

    virtual void h_w() = 0;
};

class chicken : public bird {
    int age;

public:
    chicken(int w, int h, int a) : bird(w,h), age(a) {}

    void display() {
        cout << "weight is " << get_weight() << " age is " << age << endl;
    }

    void h_w() {
        cout << "height * weight " << get_height()*get_weight() << endl;
    }
};

class cardinal : public bird {
    int num_colors;

public:
    cardinal (int w, int h, int c) : bird(w,h), num_colors(c) {}

    void display() {
        cout << "weight is " << get_weight() << " amount of colors are " << num_colors << endl;
    }

    void h_w() {
        cout << "height * weight " << get_height()*get_weight() << endl;
    }
};

int main() {
    chicken jerry(23,9,3);
    cardinal john(12,4,2);
    jerry.display();
    john.display();
    jerry.h_w();
    john.h_w();
}
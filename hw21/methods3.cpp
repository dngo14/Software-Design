#include<iostream>
using namespace std;

class bird {
    int weight;
    char color; // r = red b = blue g = green n = none

public:
    bird(int w, char c) {
        weight = w;
        color = c;
    }

    bird() {
        weight = 0;
        color = 'n';
    }
    
    int get_weight() {
        return weight;
    }

    void display() {
        cout << "weight is " << weight << " color is " << color << endl;
    }

virtual void display2() {
        cout << "YEEEEETTTT" << endl;
    }

    virtual void display3() {
        cout << "Birds are cool!" << endl;
    }
};

class chicken : public bird {
    int height;

    public:
    chicken(int w, char c, int h) : bird(w,c), height(h){}

    int get_height() {
        return height;
    }

    void display() {
        cout << "height is " << height << endl;
    }
    void show_more() {
        cout << "base class says: ";
         display();
    }

    void display2() {
        cout << "YEEEEETTTT" << endl;
    }

    virtual void display3() {
        cout << "Fried Chicken is the best!" << endl;
    }
};

int main() {
    bird dede(23, 'R');
    chicken chik(32, 'B', 10);
    cout << dede.get_weight() << endl;
    cout << chik.get_height() << endl;
    chik.show_more();
    bird *pp = &chik;
    bird &dd = chik;
    pp->display();
    //pp->get_height(); would not work since it is part of the chicken class
    pp->get_weight();
    dd.display();
    dd.get_weight();
    //dd.get_height(); wont work

    pp->display2(); // derived class
    dd.display2(); // derived class
    pp->display3(); // base class
    dd.display3(); // base class



}

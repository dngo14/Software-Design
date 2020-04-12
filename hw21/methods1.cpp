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
};

int main() {
    bird dede(23, 'R');
    chicken chik(32, 'B', 10);
    cout << dede.get_weight() << endl;
    cout << chik.get_height() << endl;
    chik.show_more();
}
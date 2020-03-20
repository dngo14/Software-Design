#include<iostream>
using namespace std;

class Chicken {
    int size;
    double weight;

public:
Chicken(int s, double w) {
    size = s;
    weight = w;
}

void double_chicke() {
    size *=2;
    weight *=2;
}
double get_weight() {
    return weight;
}
};

double operator+(Chicken h, int x) {
    return h.get_weight() + x;
}

int main() {
    Chicken a1{4, 60.8};
    double n = a1 + 80;
    cerr << n << endl;
}

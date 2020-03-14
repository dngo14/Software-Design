#include<iostream>
using namespace std;

struct info {
    long number;
    char *name;
    char *location;
    float rating;

    void print() {
        cout << "the number " << number << " is for " << name << " in " << location << " with a " << rating << " rating" << "\n";
    }
};

int main() {
    info amazon {9526772876, "Amaz", "California", 4.8};
    info gogle {9786543535, "gogle", "Utah", 2.1};
    amazon.print();
}
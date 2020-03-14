#include<iostream>
using namespace std;

struct info {

    long number;
    char *name;
    char *location;
    float rating;

    void init(long n, char *nam, char *loca, float rat) {
    number = n;
    name = nam;
    location = loca;
    rating = rat;
    }

    void print() {
        cout << "the number " << number << " is for " << name << " in " << location << " with a " << rating << " rating" << "\n";
    }
};

int main() {
    info amazon;
    info gogle;
    amazon.init(9526772876, "Amaz", "California", 4.8);
    gogle.init(9786543535, "gogle", "Utah", 2.1);
    amazon.print();
    gogle.print();
}
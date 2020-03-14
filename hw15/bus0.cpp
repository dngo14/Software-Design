#include<iostream>
using namespace std;

struct info {
    long number;
    char *name;
    char *location;
    float rating;
};

int main() {
    info amazon {9526772876, "Amaz", "California", 4.8};
    info gogle {9786543535, "gogle", "Utah", 2.1};
    cout << gogle.number << "\n";
    cout << amazon.location << endl;
}
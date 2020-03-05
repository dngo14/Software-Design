#include<iostream>
using namespace std;

struct Town {
    int children;
    double average_age;
};

struct City {
  double total_pizza;
  int num_inhabitants;
  Town Olaf;

};  

int main() {
  City northfield;
  northfield.total_pizza = 500000.1;
  northfield.num_inhabitants = 20007;
  northfield.Olaf.children = 100;
  northfield.Olaf.average_age = 28.4;
    cerr << northfield.Olaf.children << "\n";
}

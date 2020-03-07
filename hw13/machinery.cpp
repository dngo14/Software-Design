#include<iostream>
using namespace std;

struct Machinery {
  int num_blinking_lights;
  double price;
  void increase_price_by(double extra) {
    price += extra;
  }
  double copy_price_from(Machinery m) {
    price = m.price;
  }

};

int main() {
    Machinery GNE472 { 1024, 555444.33 };
    Machinery GNG475 { 512, 111222.33 };
  GNE472.increase_price_by(100000);
cerr << GNE472.price << "\n";
GNG475.copy_price_from(GNE472);
  cerr << GNG475.price;  

}

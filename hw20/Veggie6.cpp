#include<iostream>
using namespace std;

class Veggie {
  char *name;
  int calories;

public:
  Veggie(int c) : calories(c){
    name = 0;
  }

  Veggie() {
    calories = 500;
    name = 0;
  }

  Veggie(const char *n, int c) {
    calories = c;
    int len = 0;
    while (n[len++]) { }
    name = new char[len + 1];
    for (int i = 0; i < len + 1; ++i) {
      name[i] = n[i];
    }
  }

  Veggie(const Veggie &c) {
    if (c.name!=0) {
      int len = 0;
      while(c.name[len++]) { }
      delete [] name;
      name = new char[len+1];
      for (int i = 0; i < len+1; i++) {
        name[i]=c.name[i];
      }
    }
    calories = c.calories;
  }

  void print() {
    if (name) {
      cout << name << " calories " << calories << endl;
    } else { 
      cout << calories << endl;
    }
  }

  double get_calories() {
    return calories;
  }

  ~Veggie() {
    if (name) {
      cout << "deallocating " << name << endl;
    }
    delete [] name;
  }
};

class Veggie_Store : public Veggie {
  float price;
  float Storage_temperature;

  public:
  Veggie_Store(const char *n, int c, float pri, float temp) : Veggie(n, c), price(pri), Storage_temperature(temp) {}

  void print_it() {
    print();
    cout << " price: " << price << endl;
    cout << " temperature: " << Storage_temperature << endl;
  }
};

  class Veggie_Animation : public Veggie {
  int scale;
  int orientation;

  public:
  Veggie_Animation(const char *x, int z, int f, int g) : Veggie(x, z), scale(f), orientation(g) {}

  void print_this() {
    print();
    cout << " scale: " << scale << endl;
    cout << " orientation: " << orientation << endl;
  }
}; 

double operator+(Veggie n, int x) {
  return n.get_calories+x;
} 

int main() {
  Veggie a("asparagus", 42);
  Veggie b("broccoli", 33);
  Veggie c(10);
  Veggie* d[4];
  d[0] = &a;
  d[1] = &b;
  d[2] = &c;
  Veggie **e = d;
  e[2]->print();  // first line of output;  where are the others?
  Veggie yo();
  a = b;
  double n = a + 5;
  cerr << n << "\n";
}

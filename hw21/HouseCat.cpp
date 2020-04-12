#include<iostream>
using namespace std;

class Animal {
  char *name;
  float weight;

  void init(const char *n, float w) {
    int len = 0;
    while( n[len] ) { 
      ++len; 
    }
    name = new char[len+1];
    for ( int i = 0; i < len+1; ++i ) {
      name[i] = n[i];
    }
    weight = w;
  }

public:
  Animal(const char *n, float w) { 
    init(n, w); 
  }

  Animal(const Animal &a) { 
    init(a.name, a.weight); 
  }

  ~Animal() { 
    if ( name ) {  // only need to delete if name exists
      delete [] name;
      name = 0; 
    }
  }

  float current() const { 
    return weight; 
  }

  float growFast(float s) { 
    weight *= s; 
    return weight; 
  }
  Animal &operator=(Animal &s) {
      if ( s.name ) {
          delete [] name;
          init(s.name, s.weight);
      }
      else {
          weight = s.weight;
      }
      return *this;
  }
  virtual void display() {
      cout << "name: " << *name << " weight: " << weight << endl;

  }
};

class HouseCat : public Animal {
  double whisker_len;

public:
  HouseCat(double wl) : Animal("cat", 8) { 
    whisker_len = wl; 
  }

  HouseCat(const HouseCat &hc) : Animal(hc) { 
    whisker_len = hc.whisker_len; 
  }

  ~HouseCat() {}  // this is really not necessary!

  int getLen() { 
    return whisker_len; 
  }

  void trim() { 
    whisker_len /= 2; 
  }

  void display() {
      cout << "whisker length is " << whisker_len << endl;
  }
  void show_more() {
      display();
  }
};

int main(){
  HouseCat sox(12), waldo(sox);
  waldo.trim();
  waldo.trim();
  waldo.trim();
  cout << waldo.getLen() << endl;  // note return type!

  HouseCat &wa = sox;
  HouseCat *wal = &sox;
  wa.display(); //derived class
  wal->display(); //derived class
  wa.show_more(); // base class
  wal->show_more(); //base class
  Animal ani("chicken", 10);
  Animal &a = ani;
  Animal *an = &ani;
  a.display(); //base
  an->display(); //base

}

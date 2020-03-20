#include<iostream>
using namespace std;
 
class Measurement {
  int width;
  double height;

public:
  Measurement(int s, double h) { 
    width = s; 
    height = h; 
  }
};
 
class Square {
  Measurement m;
  Square *second;

public:
  Square(int wt, double ht) : m(wt, ht) { 
    second = 0; 
  }




  void set_buddy(Square *b) { 
    second = b; 
  }

};
 
int main() {
  Square one{7, 42}, two{8, 41.5};
  one.set_buddy(&two);
  two.set_buddy(&one);

}

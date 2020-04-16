#include<iostream>
using namespace std;

class Point {
  float x, y, z;

public:
  Point(float a, float b, float c): x(a), y(b), z(c) {}

  void display() const { 
    cout << x << ' ' << y << ' ' << z << '\n'; 
  }

  float &operator[] (int index) {
    if (0 == index) return x;
    else if (1 == index) return y;
    else if (2 == index) return z;
    cerr << "Error, bad index." << endl;
    return x;
  }

};

int main() {
  Point p(1, 2, 3);
  p.display();   // outputs 1 2 3
  cout << p[1] << endl;
  p[1] = 5;
  cout << p[1] << endl;
  
}
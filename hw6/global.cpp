#include<iostream>
using namespace std;

int global_x = 8;

int f(int a) {
  cerr << "  a is " << a << endl;
  global_x =+ 15;
  cerr << "  global_x is " << global_x << endl;
  return global_x;
}

int main() {
  int b = 10; 
  cerr << "global_x is " << global_x << endl;
  f(b);
  cerr << "global_x is " << global_x << endl;
}

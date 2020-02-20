#include<iostream>
using namespace std;

int main() {
  int x = 9;
  int &z = x; 
  cerr << "z is " << z << endl; 
  z = 3 + 5;
  cerr << "x is " << x << endl;  
}

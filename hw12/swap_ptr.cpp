#include<iostream>
using namespace std;
 
int main() {

    int *ptemp;

  int *p0 = new int;
  *p0 = 5;
  cerr << "*p0==" << *p0 << "\n";

  ptemp = p0;
 
  int *p1 = new int[3];
  p1[0] = 11;
  p1[1] = 12;
  p1[2] = 13;
  cerr << "p1[1]==" << p1[1] << "\n";

p0 = p1;
p1 = ptemp;

p0[1] = 15;

cerr << p0[1] << "\n";

cerr << p1[1] << "\n";
 
  delete p0;
  delete [] p1;
}

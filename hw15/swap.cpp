#include<iostream>
using namespace std;

void swap(int &a, int &b) {
  int tmp = a;
  a = b;
  b = tmp;
}

void swap(float &a, float &b) {
  float tmp = a;
  a = b;
  b = tmp;
}

void swap(double &a, double &b) {
  float tmp = a;
  a = b;
  b = tmp;
}

int main() {
  int n = 3, m = 4;
  float x = 5, y = 6;
  double q = 7, w = 8;
  swap(x, y);
  swap(n, m);
  swap(q, w);
cerr << x << ' ' << y << '\n';
cerr << n << ' ' << m << '\n';
cerr << q << ' ' << w << '\n';
}

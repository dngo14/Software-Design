#include<iostream>
using namespace std;

int main() {
  int i = 0;
  int x = 1;
  int num;
  cin >> num;
  int *p = new int [num];
  while (cin >> x) {
    p[i] = x;
    cout << x << "\n";
    i++;
  }
}



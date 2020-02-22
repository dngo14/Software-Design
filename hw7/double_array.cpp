#include<iostream>
using namespace std;

int main() {
  long a[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
  cerr << "a[3] is " << a[3] << endl;
  for (int i = 0; i < 10; ++i) {
    a[i] = 2 * a[i];  // could instead say a[i] *= 2;
  }
  cerr << "a[3] is " << a[3] << endl;
}

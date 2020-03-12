#include<iostream>
using namespace std;

int average(int *q, int j) {
    int k;
    for (int i = 0; i<j; i++) {
        k += q[i];
    }
    int m = k/j;
    return m;
}

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
cerr << "The average is " << average(p,num) << "\n";
}
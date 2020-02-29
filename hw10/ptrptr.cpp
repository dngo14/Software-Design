#include<iostream>
using namespace std;

int main() {
  int i;
  int *k;
  int **kk;
  i = 8;
  k = &i;
  kk = &k;
    cerr << &i << endl;
    cerr << k << endl;
    cerr << &k << endl;
    cerr << kk << endl;
}
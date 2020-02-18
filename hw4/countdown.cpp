#include<iostream>
using namespace std;

int main() {
  cerr << "Countdown:\n";
  for (int i = 9; i > 0; --i) {
    cerr << i << "\n";
  }
  cerr << "Blastoff!!!\n";
}

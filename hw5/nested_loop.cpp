#include<iostream>
using namespace std;

int main() {
  for (int i = 0; i < 8; ++i) {
    for (int j = 0; j < 8; ++j) {
      bool red = true;
      if (i % 2) {
        if (j % 2) red = false;
      } else {
        if ((j+1) % 2) red = false;
      }
      if (red) {
        cerr << " - ";
      } else {
        cerr << " + ";
      }
    }
    cerr << "\n";
  }
}

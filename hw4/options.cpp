#include<iostream>
#include<chrono>
using namespace std;

int main() {
  // generate a single digit number
  int x = chrono::system_clock::now().time_since_epoch().count() % 10;

  cerr << x;  // print out the number that was generated

  if (x < 3) {
    cerr << "\n option 1\n";
  } else if (x < 5) {
    cerr << "\n option 2\n";
  } else {
    cerr << "\n option 3\n";
  }
}

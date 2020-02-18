#include<iostream>
using namespace std;

int main() {
  cerr << "Please enter a small integer: ";
  int n;
  cin >> n;  // get a number from the user, and store it in n

  if (n % 3 == 0) {
    cerr << "This integer is divisible by 3!\n";
  } else if (n % 3 == 1) {
    cerr << "This integer has a remainder of 1, when divided by 3.\n";
  } else {
    cerr << "This integer has a remainder of 2, when divided by 3.\n";
  }
}

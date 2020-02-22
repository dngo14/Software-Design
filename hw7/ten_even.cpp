
#include<iostream>
using namespace std;

int main() {
  cout << "Type a number: ";
  int n;
  cin >> n;
  if (n%2!=0) {
      n+=1;
  }
  for (int i = 0; i<20; i+=2) {
      cout << "el numero " << i+n << "\n";
  }
}

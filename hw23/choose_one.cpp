#include<iostream>
using namespace std;

short global_1 = 3, global_2 = 4;

short &get_first() { 
  return global_1; 
}

short &get_one(int i) {
    if (i == 0) {
        return global_1;
    }
    else {
        return global_2;
    }
}

int main() {
  get_first() = 5;
  cout << global_1 << endl;
  cout << get_one(3) << endl;
  get_one(0) = 1; // should make global_1 equal to 1
  get_one(5) = 10; // should make global_2 equal 10
  cout << "global_1 = " << global_1 << endl;
  cout << "global_2 = " << global_2 << endl;
}

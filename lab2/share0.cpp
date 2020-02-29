#include<iostream>
using namespace std;

int main() {
  char user_input[200];

  bool first_time = true;
  while(1) {
    if (first_time) {
      cout << "What is your name? ";
    } else {
      cout << "Ok, " << user_input << "\n";
    }
    first_time = false;
    cin.getline(user_input, 200);
  }
}

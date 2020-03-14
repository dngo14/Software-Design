#include"../react.h"


void handle_input(int x) {
        char v = get_char_at(x);
        int k;
        if (v=='2'||v=='3'||v=='4'||v=='5'||v=='6'||v=='7'||v=='8'||v=='9' ) {
         int y = as_integer(10);
         for (int i = 2; i<=10; i++) {
             k = y;
             for (int n = 1; n<i; n++) {
                 k = k*y;
             }
             cerr << "the power of " << y << " to the " << i << " is " << k << "\n";
         }
        } else if (v == 'q') {
            cerr << "Exit";
            quit();
        }else {
            cerr << "Invalid Input";
        }
    print_at(x, "");
}

int main() {
  init();

  print_at(500, "What number would you like me to compute the power table for?  (enter 2-9 or q to exit)");

  const int index_1 = 10;
  if (just_starting()) {
    print_at(index_1, "");
  }

 if (received_event()) {
    handle_input(index_1);
 }
    add_yaml("power_table.yaml");
    quit();
}

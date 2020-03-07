#include"../react.h"

void handle_input(int x) {
    print_at(x, "");
}

int main() {
  init();

  const int index_1 = 10;
  if (just_starting()) {
    print_at(index_1, "");
  }

 if (received_event()) {
    handle_input(index_1);
}
  
  add_yaml("input.yaml", {{"index", index_1}});


  quit();
}

#include"../react.h"

void handle_input(int x) {
     char c0 = get_char_at(x + 0);
     cerr << c0;
    for (int i=1; i<10; i++) {
        char v = get_char_at(x+i);
        if (v!=0 && v!= '~') {
         cerr << v;
        }
    }
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

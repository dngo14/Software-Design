#include"../react.h"

bool t = true;

void handle_input(int x) {
    for (int i=0; i<20; i++) {
        char v = get_char_at(x+i);
        if (v!= 'n' && v!='N') {
         t = true;
        } else {
        t = false;
        break;
        }
    }
        if (t==true) {
            cerr << "Yes";
        }else if (t==false) {
            cerr << "NO";
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
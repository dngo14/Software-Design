#include"../react.h"

void handle_button(int button) {
  if (button == 0) {
    cerr << "Button 0 was pressed\n";
} else if (button == 1) {
    cerr << "Button 1 was pressed\n";
} else if (button == 2) {
    cerr << "Button 2 was pressed\n";
}
}

int main() {

const int counter_index = 5;
const int text_index = 10;

init();

int counter = get_int_at(counter_index);

if (just_starting()) {
    const int zero = 0;
    put_int_at(5, zero);
  } else if (received_event()) {
  for (int i; i<3; i++) {
      if (event_id_is("b", i)) {
      handle_button(i);
  }
  }
  int counter = get_int_at(counter_index);
   ++counter;
   put_int_at(counter_index, counter);

} 
for (int i=0; i<3; i++) {
      add_yaml("button.yaml", {{"id", i}});
}
add_yaml("one_text.yaml", {{"index_1", text_index}});
print_at(text_index, "{}", {counter});
  quit();
}


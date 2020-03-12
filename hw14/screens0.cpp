#include"../react.h"

int main() {
  init();
  char state = get_char_at(2);
  print_at(5, "hello");
  if (just_starting()) {
    state = 'H';
    put_char_at(2, state);
  } else if (received_event()) {
    if (event_id_is("to_screen_two")) {
      state = 'T';
      put_char_at(2, state);
    } else if (event_id_is("button_1")) {
      cerr << "ok!";
    } else if (event_id_is("to_home_screen")) {
      state = 'H';
      put_char_at(2, state);
    }
  }
  if ('H' == state) add_yaml("home0.yaml");
  else add_yaml("screenB.yaml");
  quit();
}

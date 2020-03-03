#include"../react.h"
  
int main() {
  init();

  if (received_event()) {
    if (event_id_is("go")) {
      cerr << "Yes!\n";
    } else if (event_id_is("stop")) {
      cerr << "NO.\n";
    }
  }
  add_yaml("green_red.yaml");

  quit();
}

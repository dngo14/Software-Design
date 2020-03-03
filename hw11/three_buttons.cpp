#include"../react.h"
  
int main() {
  init();

  if (received_event()) {
    if (event_id_is("go")) {
      cerr << "Forward!\n";
    } else if (event_id_is("stop")) {
      cerr << "Backward!\n";
    }else if (event_id_is("change")) {
      cerr << "Change Direction\n";
    }
  }
  add_yaml("three_buttons.yaml");

  quit();
}
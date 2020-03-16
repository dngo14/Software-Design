#include"../react.h"
  
int main() {
  init();
  print_at(5, "Once upon a time, there was a knight named Chad.\
  He traveled far and wide in search for a worthy challenger and arrived at the land of Aldia.\
  \n Option 1: Go to the city of Medina. \
  \n Option 2 Go to the local bar \n");
  print_at(300, "1");
  print_at(302, "2");
  print_at(400, "Arriving at the grand city of Medina, Chad \
  was awed at the beautiful city before him. As he walked\
  past the gateway he saw a poster for a fighting competition.\
  \n Option 1: Fight in the arena.\
  \n Option 2: Keep walking.");
  add_yaml("test1.yaml");
  quit();
}


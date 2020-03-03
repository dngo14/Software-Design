#include"../react.h"

int main() {
  init();
  double z = 3.14567;

  print_at(5, "hello, world!");
  print_at(20, "Cheerio");
  print_at(30, "The Value of Z is {}", {z});
  add_yaml("simple_text.yaml");

  quit();
}




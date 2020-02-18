#include<iostream>
using namespace std;
#include"../show_mem.h"

int main() {
  init();

  fetch("https://api.weather.gov/gridpoints/MPX/111,47/forecast", -2000);

  char c = get_char_at(271);
  char d = get_char_at(272);
  cerr << "Byte [271] and [272] contains: " << c;
  cerr << d << "\n";

  quit();
}

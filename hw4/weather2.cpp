#include<iostream>
using namespace std;
#include"../show_mem.h"

int main() {
  init();

  fetch("https://api.weather.gov/gridpoints/MPX/111,47/forecast", -2000);



  for (int i=585;i<600;i++) {
      char c = get_char_at(i);
      cerr << c << "\n";
  }

  quit();
}

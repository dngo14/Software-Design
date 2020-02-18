#include<iostream>
using namespace std;
#include"../show_mem.h"

int main() {
  unsigned char c0, c1;

  c0 = 0;  c1 = 1;
  put_char_at(0, c0);  put_char_at(1, c1);
  // now that we’ve set two bytes, what happens if
  //   we read the two bytes as a single short?
  cerr << "A. " << get_short_at(0) << endl;

  c0 = 1;  c1 = 0;
  put_char_at(0, c0);  put_char_at(1, c1);
  cerr << "B. " << get_short_at(0) << endl;

  c0 = 255;  c1 = 255;
  put_char_at(0, c0);  put_char_at(1, c1);
  cerr << "C. " << get_short_at(0) << endl;
}
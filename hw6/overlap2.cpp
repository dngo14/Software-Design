#include<iostream>
using namespace std;
#include"../show_mem.h"

int main() {
  short s0, s1;

  s0 = 0;  s1 = 1;
  put_short_at(4, s0);  
  put_short_at(6, s1);
  cerr << "A. " << get_int_at(4) << endl;

  s0 = 1;  s1 = 0;
  put_short_at(4, s0);
  put_short_at(6, s1);
  cerr << "B. " << get_int_at(4) << endl;

  s0 = 255;  s1 = -1;
  put_short_at(4, s0);
  put_short_at(6, s1);
  unsigned char c0 = 255;
  put_char_at(5, c0);
  cerr << "C. " << get_int_at(4) << endl;
}

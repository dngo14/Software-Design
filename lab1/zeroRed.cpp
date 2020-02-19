#include<iostream>
using namespace std;
#include"../show_mem.h"

int main() {
  init();

  read_image("small.ppm");

  int width, height;
  get_image_dimensions(width, height);
  cerr << "width is " << width << endl;

  unsigned char r = 0;
  for (int i=0; i<(width*height)+1; ++i) {
    put_uchar_at(3*i-3,r);
  }
  write_image("output.ppm");

  quit();
}

#include<iostream>
using namespace std;
#include"../show_mem.h"

int main() {
  init();

  read_image("small.ppm");

  int width, height;
  get_image_dimensions(width, height);

  unsigned char r = 0, g = 255, b = 0;
  put_uchar_at(0, r);
  put_uchar_at(1, g);
  put_uchar_at(2, b);

  write_image("output.ppm");

  quit();
}


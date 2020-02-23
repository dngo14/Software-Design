#include<iostream>
using namespace std;
#include"../show_mem.h"

int main() {
  init();

  read_image("small.ppm");

  int width, height;
  get_image_dimensions(width, height);
  for (int i=0;i<width;i++) {
      int x = get_uchar_at(3*i-3);
      int y = get_uchar_at(3*i-2);
      int z = get_uchar_at(3*i-1);
      put_uchar_at((3*i-3)+width,x);
      put_uchar_at((3*i-2)+width,y);
      put_uchar_at((3*i-1)+width,z);
  }
  write_image("output.ppm");
  quit();
}
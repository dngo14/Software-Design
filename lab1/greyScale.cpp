#include<iostream>
using namespace std;
#include"../show_mem.h"

int main() {
  init();

  read_image("small.ppm");

  int width, height;
  get_image_dimensions(width, height);
  cerr << "width is " << width << endl;

  //unsigned char r = 0, g = 255, b = 0;
  for (int i=0; i<(width*height)+1; ++i) {
    int a = get_uchar_at(3*i-3);
    int c = get_uchar_at(3*i-2);
    int d = get_uchar_at(3*i-1);
    int x = (a*c*d)/3;
    put_uchar_at(3*i-3,x);
    put_uchar_at(3*i-2,x);
    put_uchar_at(3*i-1,x);
  }
  write_image("output.ppm");

  quit();
}

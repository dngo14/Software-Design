#include<iostream>
using namespace std;
#include"../show_mem.h"

int main() {
  init();

  read_image("small.ppm");

  int width, height;
  get_image_dimensions(width, height);
  //cerr << "width is " << height/4 << endl;

  unsigned char r = 255, g = 0, b = 255;
  for (int i=6; i<(width*3/3); i+=3) {
    for (int k=8; k<(height/1.5); k++) {

        put_uchar_at(i+3*(width)*k,r);
        put_uchar_at(i+1+3*(width)*k,g);
        put_uchar_at(i+2+3*(width*k),b);
    }
  }
  write_image("output.ppm");
  quit();
}
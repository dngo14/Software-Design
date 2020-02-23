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
  for (int i=0; i<(width*3/4); i+=3) {
    for (int j=0; j<width*3; j+=3) {
      for (int k=0; k<(height/4); k++) {
        for (int c=0; c<height; c++) {
          put_uchar_at(i+3*(width)*k,r);
          put_uchar_at(i+1+3*(width)*k,g);
          put_uchar_at(i+2+3*(width*k),b);
          if (j>22 && j<34) {
            put_uchar_at(j+3*(width)*k,r);
            put_uchar_at(j+1+3*(width)*k,g);
            put_uchar_at(j+2+3*(width*k),b); 
          }
          if (j>10 && j<24) {
            put_uchar_at(j+3*(width)*k+(width*12),r);
            put_uchar_at(j+1+3*(width)*k+(width*12),g);
            put_uchar_at(j+2+3*(width)*k+(width*12),b); 
          }
          if (j>34 && j<60) {
            put_uchar_at(j+3*(width)*k+(width*12),r);
            put_uchar_at(j+1+3*(width)*k+(width*12),g);
            put_uchar_at(j+2+3*(width)*k+(width*12),b); 
          }
          if (j>22 && j<34) {
            put_uchar_at(j+3*(width)*k+(width*24),r);
            put_uchar_at(j+1+3*(width)*k+(width*24),g);
            put_uchar_at(j+2+3*(width)*k+(width*24),b); 
          }
          if (j>0 && j<14) {
            put_uchar_at(j-3+3*(width)*k+(width*24),r);
            put_uchar_at(j-2+3*(width)*k+(width*24),g);
            put_uchar_at(j-1+3*(width)*k+(width*24),b); 
          }
          if (j>10 && j<24) {
            put_uchar_at(j+3*(width)*k+(width*36),r);
            put_uchar_at(j+1+3*(width)*k+(width*36),g);
            put_uchar_at(j+2+3*(width)*k+(width*36),b); 
          }
          if (j>34 && j<60) {
            put_uchar_at(j+3*(width)*k+(width*36),r);
            put_uchar_at(j+1+3*(width)*k+(width*36),g);
            put_uchar_at(j+2+3*(width)*k+(width*36),b); 
          }
        }
      }
    }
  }
  write_image("output.ppm");
  quit();
}
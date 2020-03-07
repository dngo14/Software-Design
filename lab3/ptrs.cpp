#include"../react.h"

struct Pixel {
    unsigned char red, green, blue;
};
int main() {


int width = 16, height = 16;

  Pixel **image;   // declare a variable 'image' of the correct type
  image = new Pixel* [16]; // dynamically allocate memory for the pointers to scanlines
  for (int i = 0; i<16; i++ )  {// dynamically allocate memory for each of the scanlines, 
    //   using a loop
    image[i] = new Pixel[16];
  }
  for (int i = 0; i<16; i++) {
    for (int j = 0; j<16; j++) {
        unsigned char x = (j%5)*50;
        unsigned char n = (i%5)*50;
        unsigned char w = (x*n)%256;
    image[i][j].red = x;  // set some pixel value manually
    image[i][j].green = n;
    image[i][j].blue = w;
    }
  }
  // cerr << image[0][0].red << "\n";  // print it out, should be 'a'
  write_image("output.ppm", reinterpret_cast<char **>(image), width, height); 

  for (int i = 0; i<3; i++) {
            // de-allocate the memory for each of the scanlines, 
    delete image [i];
            //    using a loop
  }
  delete image;  //  de-allocate the memory for the pointers to the scanlines
}

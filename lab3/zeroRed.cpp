#include"../react.h"

struct Pixel {
    unsigned char red, green, blue;
};

int main() {

int width, height;
get_image_dimensions("small.ppm", width, height);

Pixel **image;   
  image = new Pixel* [width]; 
  for (int i = 0; i<height; i++ )  { 

    image[i] = new Pixel[width];
  }

read_image("small.ppm", reinterpret_cast<char **>(image), width, height);

for (int i=0; i<height; i++) {
    for (int j=0; j<width; j++) {
    image[i][j].red = 0;
}
}

write_image("output.ppm", reinterpret_cast<char **>(image), width, height); 

  for (int i = 0; i<3; i++) {
            // de-allocate the memory for each of the scanlines, 
    delete image [i];
            //    using a loop
  }
  delete image;  //  de-allocate the memory for the pointers to the scanlines
}
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
    int x = image[i][j].green;
    if (x*2<256) {
    image[i][j].green = x*2;
    }
    else {
        image[i][j].green = 256;
    }
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
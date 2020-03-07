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
for (int h = width/4; h<width; h+=width/2) {
for (int k = height/4; k<height; k+=height/2) {
for (int i=0; i<width/4; i++) {
 for (int j=0; j<height/4; j++) {
    image[j+k][i+h].red = 255;
    image[j+k][i+h].green = 0;
    image[j+k][i+h].blue = 255;
}
}
}
}
for (int h = 0; h<width; h+=width/2) {
for (int k = 0; k<height; k+=height/2) {
for (int i=0; i<width/4; i++) {
 for (int j=0; j<height/4; j++) {
    image[j+k][i+h].red = 255;
    image[j+k][i+h].green = 0;
    image[j+k][i+h].blue = 255;
}
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
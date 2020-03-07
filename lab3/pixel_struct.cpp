#include"../react.h"

struct Pixel {
    unsigned char red, blue, green ;
};

int main() {
  Pixel p1;
  p1.red = p1.green = p1.blue = 17;
  int n = p1.red;  // convert to int, prior to printing
  cerr << n << "\n";
}

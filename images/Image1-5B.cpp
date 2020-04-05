#include<iostream>
using namespace std;

struct Pixel {
    unsigned char red, green, blue;
};

class Image {
    int width, height, depth;
    Pixel **data;

    public:
    Image(int w, int h) {
    width = w;
    height = h;
    data = new Pixel*[w];
 for (int i = 0; i<h; i++ )  { 
data[i] = new Pixel[w];
  }
    }

    ~Image() {
        delete [] data;
    }

    int getWidth() {
        return width;
    }

    int getHeight() {
        return height;
    }

    void print() {
    for (int i=0; i<height; i++) {
    cout.write(reinterpret_cast<char *>(data), width);
    }

    }
};

int main() {
    Image me{5,4};
}
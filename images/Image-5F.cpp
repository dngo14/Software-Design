#include<fstream>
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

    Image(ifstream) {
        ifstream g("tiny.ppm");
        char name[3];
        g >> name;
        int wit, heit;
        wit = width;
        heit = height;
        g >> wit >> heit;  
  data = new Pixel *[depth]; 
  for (int i = 0; i<heit; i++ )  { 
    data[i] = new Pixel[wit];
  }
    g >> depth;
    char j;
    j = g.get();
    char *data2;
   g.read(data2, wit*heit);
    }

Image(const Image &s) {
    data = new Pixel *[s.depth];
    for(int i = 0; i < height; i++) {
        data[i] = new Pixel[s.width];
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

    void zeroRed() {
    read_image("tiny.ppm", reinterpret_cast<char **>(data), width, height);
    for (int i=0; i<height; i++) {
    for (int j=0; j<width; j++) {
    data[i][j].red = 0;
}
}
write_image("output.ppm", reinterpret_cast<char **>(data), width, height);
}

greyScale() {
    read_image("tiny.ppm", reinterpret_cast<char **>(data), width, height);

for (int i=0; i<height; i++) {
    for (int j=0; j<width; j++) {
    int x = (data[i][j].red + data[i][j].green + data[i][j].blue)/3;
    data[i][j].red = x;
    data[i][j].green = x;
    data[i][j].blue = x;
}
}
write_image("output.ppm", reinterpret_cast<char **>(data), width, height);
}

    void print() {
    for (int i=0; i<height; i++) {
    cout.write(reinterpret_cast<char *>(data), width);
    }

    }
};

int main() {
    Image myimg("tiny.ppm");
}
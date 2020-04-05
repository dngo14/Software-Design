#include<iostream>
using namespace std;


class Image0 {
    int width;
    int height;

public:
    Image0(int w, int h) {
        width = w;
        height = h;
    }

    int getWidth() {
        return width;
    }

    int getHeight() {
        return height;
    }

};

int main() {
    Image0 yo{3,2}, ya{50,30};
    cout << yo.getWidth() << endl;
    cout << ya.getHeight() << endl;
}
#include<iostream>
using namespace std;

class UltimateFrisbee {
  int size;
  float *data;
public:
  UltimateFrisbee() { size = 0; data = 0; }
  UltimateFrisbee(int s) { size = s; data = new float[size]; }

  ~UltimateFrisbee() { cout << "bye!" << endl; if ( data ) delete [] data; }

UltimateFrisbee(const UltimateFrisbee &b) {
    size = b.size;
    data = new float[b.size];
    for (int i = 0; i < b.size; ++i) {
      data[i] = b.data[i];
    }
  }

  void display()
    { cout << "size " << size << endl;}
};

int main()
{
  UltimateFrisbee g1, g2(3);

  g1.display();
  g2.display();
}

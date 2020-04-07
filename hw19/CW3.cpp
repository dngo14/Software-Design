#include<iostream>
using namespace std;

class ConeWeights {
  int num_cones;
  float *data;
public:
  // constructors
  ConeWeights(int n) { 
    num_cones = n; 
    data = new float[num_cones]; 
  }

  ConeWeights(const ConeWeights &c) {
    num_cones = c.num_cones;
    data = new float[num_cones];
    for (int i = 0; i < num_cones; ++i) { 
      data[i] = c.data[i];
    }
  }

  // destructor
  ~ConeWeights() { 
    cout << "bye!" << endl; 
    delete [] data; 
  }

  void assign_cone_weight(int i, float w) { 
    data[i] = w; 
  }

  void display() { 
    cout << "num_cones " << num_cones << endl;
  }


    ConeWeights &operator=(const ConeWeights &c) { // version 4
    num_cones = c.num_cones;
    delete [] data;
    data = new float[c.num_cones];
    for (int i = 0; i < c.num_cones; ++i) {
      data[i] = c.data[i];
    }
    return *this;
  }


};

int main() {
  ConeWeights c1{251}, c2{252};
  c2 = c1;
  c2.display();
}

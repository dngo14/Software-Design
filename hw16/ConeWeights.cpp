#include<iostream>
using namespace std;

class ConeWeights {
  int num_cones;
  float *data;

public:
  // constructor
  ConeWeights(int n) { 
    num_cones = n; 
    data = new float[num_cones]; 
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
    cout << *data << endl;
  }

  void multi() {
      int count = 0;
      while(data[count]) {
          count++;
      }
      for (int i = 0; i<count; i++) {
          data[i] *= 3;
      }
  }

  void increase_size() {
      float *cone = new float[num_cones+1];
      for (int i = 0; i<num_cones; i++) {
          cone[i] = data[i];
      }
      delete [] data;
      data = new float[num_cones+1];
      for (int i = 0; i<num_cones; i++) {
          data[i] = cone[i];
      }
      data[num_cones+1] = 0;
      num_cones += 1;
  }
};

int main() {
  ConeWeights cs{251}; // constructor is automatically called here
  cs.assign_cone_weight(0, 125.5);
  cs.display();
  // invisible feature:  the destructor is automatically called here!
  cs.multi();
  cs.display();
  cs.increase_size();
  cs.display();

}

#include<iostream>
using namespace std;

class IntArray {
    int size;
    int *elt;
    
public:
    static int DEFAULT_SIZE;

    IntArray(int sz) {
        size = sz;
        elt = new int [size];
        for (int i = 0; i < size; i++) {
            elt[i] = 0;
        }
    }

    IntArray() {
        size = DEFAULT_SIZE;
        elt = new int [size];
        for (int i = 0; i < size; i++) {
            elt[i] = 0;
        }
    }

    IntArray(const IntArray &arr) {
        size = arr.size;
        elt = new int [size];
        for (int i = 0; i < size; i++) {
            elt[i] = arr.elt[i];
        }  
    }

    ~IntArray() {
        delete [] elt;
    }

    IntArray &operator=(const IntArray &arr) {
        size = arr.size;
        delete [] elt;
        elt = new int [size];
        for (int i = 0; i < size; i++) {
            elt[i] = arr.elt[i];
        } 
        return *this;  
    }

    int getSize() {
        return size;
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << i <<": " << elt[i] << endl;
        }
    }

    int &operator[](int x) {
      if (x<0) {
          cout << "ERROR!! INDEX IS OUT OF RANGE" << endl;
          return elt[0];
      }
      else if(x>size-1) {
          cout << "ERROR!! INDEX IS OUT OF RANGE" << endl;
          return elt[size-1];
      }
      else {
          return elt[x];
      }
    }
};

int IntArray::DEFAULT_SIZE = 10;

int main() {
  IntArray arr1, arr2(3);
  cout << "arr1 has size " << arr1.getSize() << endl;
  arr2.display(); cout << endl;
 
  arr2[1] = 24;
  arr2.display(); cout << endl;
  arr2[389]; // should display an error, but not crash
 
  IntArray arr3(arr2);
  arr3.display();
  arr1 = arr3;
  arr1.display();
  arr2[2] = 63;
  (arr1 = arr2)[0] = -99;
  arr1.display();
}

#include"../react.h"

int main() {
  init();
  short *arr = reinterpret_cast<short *>(global_mem + 20);
  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;
  cerr << arr[0] << endl;  
  cerr << arr[1] << endl;  
  cerr << arr[2] << endl;

  quit();
}

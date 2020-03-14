#include<iostream>
using namespace std;

char* copyn(char *p, const char q[], unsigned int n) {
    p = new char[n];
    for (int i = 0; i < n; i++) {
        p[i] = q[i];
    }
    return p;
}

int main() {                                                                                                                        
  char *buff;                                                                                                                             
  copyn(buff, "St. Olaf", 5);                                                                                                             
  cout << buff << "\n";                                                                                                                   
}

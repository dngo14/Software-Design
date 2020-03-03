#include<iostream>
#include <string.h>
using namespace std;

void write_at(char *i, int j, char *q) {
    for (int n = j; n<=10; n++) {
        i[n] = q[n-j]; 
    }
    cerr << i << "\n"; 
}

int main() {
char a[] = "hello";
char b[] = "bye";
write_at(a, 1, b);
// a should now be "hbye"

char y[100] = "greetings";
write_at(y, 3, b);
// y should now be "grebye"


}
#include<iostream>
#include <string.h>
using namespace std;

int length_of(const char *array) {
    int counter=0;
    while (array[counter]!=0) {
        counter++;
    }
    return counter;
}

void write_at(char *i, int j, char *q) {
    for (int n = j; n<=10; n++) {
        i[n] = q[n-j]; 
    }
    cerr << i << "\n"; 
}

void append(char *n, char *k) {
    int x = length_of(n);
    write_at(n, x, k);
}

int main () {
    char a[15];
a[0] = 'W';
a[1] = 0;
// a is now "W"
char b[] = "bye";
append(a, b);
// a is now "Wbye"
append(a, b);
// a is now "Wbyebye"
}
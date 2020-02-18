#include<iostream>
using namespace std;

int main() {
    for (int i = 0; i < 100; i=i+2) {
        int n=i*i;
        if (i%5==0) {
            cerr << n << "\n";
        }
    }
}



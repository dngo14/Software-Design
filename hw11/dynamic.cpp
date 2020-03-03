#include<iostream>
using namespace std;

int main() {
    int n = 3;
    short *a;
    a = new short[n];
    double *p;
    p = new double[n];
    delete [] a;
    delete [] p;
}
#include<iostream>
using namespace std;


int sum_many(int x1, int x2, int x3 = 5, int x4 = 7) {
    int result = x1 + x2 + x3 + x4;
    return result;
} 

int main() {
    int n = sum_many(11,2);
    cerr << n << "\n";
}


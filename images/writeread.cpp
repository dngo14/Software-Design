#include<fstream>
#include<iostream>
using namespace std;

int main() {
  ofstream f("yaya.txt");
  f << "What is up, yaya!" << endl;
  f.close();

 ifstream g("yaya.txt");
 char n;
 int x = 0;
 char *i;
 i = new char[30];
 while (g >> n) {
     i[x] = n;
     x++;
 }
  g.close();
  cerr << i << endl;
  delete [] i;
}
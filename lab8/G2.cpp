#include<map>
#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main() {
  string fname = "expenses.10000";
  ifstream f(fname.c_str());
  vector<string> line;
  while (f) {
          string t;
          getline(f, t);
          line.push_back(t);
  }
  int n = 0;
  for (auto x:line) {
    n += x.size();
  }
  cout << n << endl;
}
#include<map>
#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main() {
vector<string> v;
string fname = "expenses.10000";
ifstream f(fname.c_str());
string t;
while (getline(f, t)) {
    v.push_back(t);
  }
  for (string x : v)
    cout << x << endl;

  cout << v.size() << endl;
}
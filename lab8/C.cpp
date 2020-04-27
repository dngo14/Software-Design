#include<vector>
#include<iostream>
using namespace std;

int main() {
  vector<int> v = {2, 3, 5, 7, 11};
//   for (int i = 0; i < 5; ++i)
//     cout << v[i] << endl;

//     v[1] = 10;
//     cout << v[1] << endl;

//     for (int x : v) 
//     cout << x << endl;

//   cout << v.size() << endl;

//   cout << endl;

//    v.push_back(22);
//   cout << v.size() << endl;
//   for (auto x : v)
//     cout << x << endl;

//   v.erase(v.begin() + 1);
//   for (auto x : v)
//     cout << x << endl;

//   v.insert(v.begin() + 2, 9);
//   for (auto x : v)
//     cout << x << endl;

//   v.clear();
//   cout << v.size() << endl;


v.insert(v.begin() + 2, 10);
v.insert(v.begin() + 3, 12);
v.insert(v.begin() + 4, 15);
for (auto x : v)
    cout << x << endl;

}
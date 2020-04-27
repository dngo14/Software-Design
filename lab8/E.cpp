#include<map>
#include<iostream>
using namespace std;

int main() {
  map<string, int> price;
  price["socks"] = 1000;
  price["shoes"] = 3000;
//   cout << price["socks"] << endl;  
//   cout << price.size() << endl;

//   price[0] = 2000;
//   cout << price["socks"] << endl; 
// &price["socks"] + 100;
//  cout << price["socks"] << endl; 

  for (auto p : price)
    cout << p.first << ' ' << p.second << endl;

  if (price.find("boots") == price.end())
    cout << "not found" << endl;
  price.erase("socks");
  for (auto p : price)
    cout << p.first << ' ' << p.second << endl;
  price.clear();



}
#include<map>
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    map<string, int> num; //creates a variable array with indexes as strings and value as a number
  map<string, string> dict; //creates a variable array with indexes as strings and value as a string
  string fname = "data.txt"; //fname holds the string "data.txt"
  ifstream f(fname.c_str()); //Creates a stream of the contents in fname
  string t; //variable t is string
  while (f >> t) { //while loop to go through the file and puts strings/chars into t
    int n; // variable with type int
    f >> n; // puts ints inside of n
    string d; //creates string d
    getline(f, d); // gets contents in f and puts into d
    //cout << "term " << t << " num " << n << " definition " << d << endl; //prints out t, n, and d
    num[t] = n; // t is the string index that holds value int n
    dict[t] = d; // t is the string index that holds value string d
  }
  cout << num["aardvark"] << ' ' << dict["aardvark"] << endl;

  for (auto p : num)
    cout << p.first << ' ' << p.second << endl;

num["aardvark"] = 5;
cout << num["aardvark"];

}
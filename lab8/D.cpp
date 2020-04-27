#include<string>
#include<iostream>
using namespace std;

int main() {
    string s = "hi hi";
  cout << s[1] << endl;  
  cout << "size " << s.size() << endl;

//   s[1] = 'e';
//   cout << s[1] << endl; 

  s = s + " ok";
  cout << s << endl; 
  string s2 = "ji ji";
  cout << (s < s2) << endl;


}
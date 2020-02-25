#include<fstream>
#include<string.h>
using namespace std;

int main() {
  char greeting[17] = {'h','e','l','l','o',' ','e','v','/0','e','r','y','b','o','d','y','!'};
  int n = strlen(greeting);

  ofstream f("a.txt");  // create file stream object
  f.write(greeting, n);  
  f.close();
}

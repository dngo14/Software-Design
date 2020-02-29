#include<iostream>
using namespace std;

int func(int arg) {
  arg = arg + 2;
  return arg;
}

int funcp(int *argp) {
  *argp = (*argp) + 2;
  return *argp;
}

int main () {
  int i = 17;
  double f = -4.2;
  int *ip = &i; 
  double *fp = &f;
  cerr << "i is " << i << ", ip is " << *ip << ", f is "<< f << ", fp is " << *fp << "\n";
  i *= 3;
  *fp *= 1.5;
  cerr << "i is " << i << ", ip is " << *ip << ", f is "<< f << ", fp is " << *fp << "\n";
  double f2 = 2.5;
  fp = &f2;
  i = i * *ip;
  cerr << "i is " << i << ", ip is " << *ip << ", f is "<< f << ", fp is " << *fp << ", f2 is " << f2 << "\n";
  cerr << "func(i) returns " << func(i);
  cerr << ", i is " << i << ", *ip is " << *ip << endl;
  cerr << "func(*ip) returns " << func(*ip);
  cerr << ", i is " << i << ", *ip is " << *ip << endl;
  cerr << "funcp(ip) returns " << funcp(ip);
  cerr << ", i is " << i << ", *ip is " << *ip << endl;
  cerr << "funcp(&i) returns " << funcp(&i);
  cerr << ", i is " << i << ", *ip is " << *ip << endl;



}

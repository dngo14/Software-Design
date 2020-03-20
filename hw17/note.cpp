#include<iostream>
using namespace std;

class Note {
  char *sender;
  char *message;

public:
  Note() {  // this constructor is called a default constructor
    sender = new char[3];
    sender[0] = 'A';  
    sender[1] = 'B';  
    sender[2] = 0;
    
    message = new char[3];
    message[0] = 'h';  
    message[1] = 'i';  
    message[2] = 0;
  }

  Note(const Note &a, const Note &b) {
    sender = new char[3];
    for (int i = 0; i < 3; ++i) {
      sender[i] = a.sender[i];
    }
    message = new char[3];
    for (int i = 0; i < 3; ++i) {
      message[i] = b.message[i];
    }
    cout <<" YOOO " << "\n";
  }

  ~Note() { 
    delete [] sender; delete [] message; 
  }

  void display(ostream &os) {
    os << "sender: " << sender << " ";
    os << "message: " << message << "\n";
  }
};

int main() {
  Note n1, n2;
  n1.display(cout);  // output:  sender: AB message: hi
  Note n1copy{n1};
}

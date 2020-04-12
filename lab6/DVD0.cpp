#include<iostream>
using namespace std;

class DVD {
    int id;
    char *title;
    char *director;

public:
    DVD (int i, char *t, char *dir) {
        id = i;
        int len = 0;
        while(t[len++]);
        title = new char [len+1];
        for (int i = 0; i < len+1; i++) {
          title[i] = t[i];
        }
        len = 0;
        while(dir[len]){len++;}
        director = new char[len+1];
        for (int i = 0; i < len+1; i++) {
          director[i] = dir[i]; 
        }
    }
    DVD() {
        id = 0;
        title = new char [50];
        director = new char [50];
        title[0] = 0;
        director[0] = 0;
    }

    DVD(const DVD &s) {
      id = s.id;
      int len = 0;
      while(s.title[len++]);
      title = new char [len+1];
      for (int i = 0; i < len+1; i++) {
        title[i] = s.title[i];
      }
      len = 0;
      while(s.director[len++]);
      for (int i = 0; i < len+1; i++) {
        director[i] = s.director[i];
      }
      }

   ~DVD() {
      delete [] title;
      delete [] director;
    }

    int getId() {
      return id;
    }

    char getTitle() {
      return *title;
    }

    char getDirector() {
      return *director;
    }

    void display() {
      cout << id <<". " << title << "/" << director << endl;
    }

  void setId(int x) {
    id = x;
  }

  void setTitle(char *x) {
    delete [] title;
    int len = 0;
    while(x[len++]);
    title = new char [len+1];
    for (int i = 0; i < len+1; len++) {
      title[i] = x[i];
    }
  }

  void setDirector(char *x) {
    delete [] director;
    int len = 0;
    while(x[len++]);
    title = new char [len+1];
    for (int i = 0; i < len+1; len++) {
      director[i] = x[i];
    }
  }

  DVD &operator=(const DVD &s) {
    id = s.id;
    delete [] title;
    delete [] director;
    int len = 0;
    int leng = 0;
    while(s.title[len++]);
    while(s.director[leng++]);
    for (int i = 0; i < len+1; i++) {
      title[i] = s.title[i];
    }
    for (int i = 0; i < leng+1; i++) {
      director[i] = s.director[i];
    }
    return *this;
  }
    };
 
int main() {
  char str[] = "Gandhi";
  DVD d1(4, str, "Richard Attenborough");
  
  DVD d2;
  DVD d3(d1);

 
  cout << "After constructors:" << endl;
  d1.display(); cout << endl; // [4.  Gandhi/Richard Attenborough]
  
  d2.display(); cout << endl; // [0.  /]
  d3.display(); cout << endl; // [4.  Gandhi/Richard Attenborough]
 
  str[0] = 'X';
 
  cout << "Test for dynamically allocated copies" << endl;
  d1.display(); cout << endl; // [4.  Gandhi/Richard Attenborough]
  d2.display(); cout << endl; // [0.  /]
  d3.display(); cout << endl; // [4.  Gandhi/Richard Attenborough]
 
  cout << d2.getId() << endl; // 0
  cout << d1.getTitle() << endl; // Gandhi
  cout << d1.getDirector() << endl; // Richard Attenborough
 
  d1.setId(2);
  d1.setTitle("Shadowlands");
  d2.setDirector("Ingmar Bergman");
 
  cout << "After state changes:" << endl;
  d1.display(); cout << endl; // [2.  Shadowlands/Richard Attenborough]
  d2.display(); cout << endl; // [0.  /Ingmar Bergman]
  d3.display(); cout << endl; // [4.  Gandhi/Richard Attenborough]
 
  d3 = d2;
  d2.setTitle("Wild Strawberries");
 
  cout << "After more state changes:" << endl;
  d1.display(); cout << endl; // [2.  Shadowlands/Richard Attenborough]
  d2.display(); cout << endl; // [0.  Wild Strawberries/Ingmar Bergman]
  d3.display(); cout << endl; // [0.  /Ingmar Bergman]
  
}

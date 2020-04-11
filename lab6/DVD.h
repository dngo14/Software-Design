
#ifndef _DVD_H_
#define _DVD_H_
#include<iostream>
using namespace std;

class DVD {
int id;
    char *title;
    char *director;

public:
    DVD (int i, char *t, char *dir);
    DVD();
    DVD(const DVD &s);
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

  void setTitle(char *x);

  void setDirector(char *x);

  DVD &operator=(const DVD &s);
};

#endif  // _DVD_H_

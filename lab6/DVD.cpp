#include "DVD.h"

DVD::DVD (int i, char *t, char *dir) {
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
    DVD::DVD() {
        id = 0;
        title = new char [50];
        director = new char [50];
        title[0] = 0;
        director[0] = 0;
    }

    DVD::DVD(const DVD &s) {
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
  void DVD::setTitle(char *x) {
    delete [] title;
    int len = 0;
    while(x[len++]);
    title = new char [len+1];
    for (int i = 0; i < len+1; len++) {
      title[i] = x[i];
    }
  }

  void DVD::setDirector(char *x) {
    delete [] director;
    int len = 0;
    while(x[len++]);
    title = new char [len+1];
    for (int i = 0; i < len+1; len++) {
      director[i] = x[i];
    }
  }

    DVD& DVD::operator=(const DVD &s) {
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
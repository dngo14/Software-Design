#ifndef _DVDArrayP_H_
#define _DVDArrayP_H_
#include<iostream>
using namespace std;

class DVD {};

class DVDArrayP {
    DVD **elt;
    int size;

public:
    static int DEFAULT_SIZE;

    DVDArrayP(int sz);

    DVDArrayP();

    DVDArrayP(const DVDArrayP &arr);

    ~DVDArrayP();

    int getSize() {
        return size;
    }

    DVDArrayP &operator=(const DVDArrayP &arr);

    void display();

    DVD &operator[](int x);

};

#endif  // _DVDArrayP_H_

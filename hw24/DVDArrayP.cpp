#include "DVDArrayP.h"

    int DVDArrayP::DEFAULT_SIZE = 20;

    DVDArrayP::DVDArrayP(int sz) {
        size = sz;
        elt = new DVD* [sz];
        for (int i = 0; i < sz; i++) {
            elt[i] = 0;
        }
    }

    DVDArrayP::DVDArrayP() {
        size = DEFAULT_SIZE;
        elt = new DVD* [DEFAULT_SIZE];
        for (int i = 0; i < DEFAULT_SIZE; i++) {
            elt[i] = 0;
        }
    }

    DVDArrayP::DVDArrayP(const DVDArrayP &arr) {
        size = arr.size;
        elt = new DVD* [size];
        for (int i = 0; i < size; i++) {
            if (arr.elt[i] == 0) {
                elt[i] = 0;
            }else{
            elt[i] = arr.elt[i];
            }
        }
    }

    DVDArrayP::~DVDArrayP() {
        for (int i = 0; i < size; i++) {
            if (elt[i] != 0) {
                delete [] elt[i];
            }
        }
        delete [] elt;
    }

    DVDArrayP & DVDArrayP::operator=(const DVDArrayP &arr) {
        size = arr.size;
        delete [] elt;
        elt = new DVD* [size];
        for (int i = 0; i < size; i++) {
            if (arr.elt[i] == 0) {
                elt[i] = 0;
            }else{
            elt[i] = arr.elt[i];
            }
        }
        return *this;
    }

    void DVDArrayP:: display() {
        for (int i = 0; i < size; i++) {
            if (elt[i] != 0) {
                cout << i << ": " << elt[i] << endl;
            }
        }
    }

    DVD& DVDArrayP::operator[](int x) {
        if (x<0 || x>size-1) {
            cout << "Request out of range!!!" << endl;
            if (x<0) {
                if (elt[0] = 0) {
                    DVD *z = new DVD;
                    elt[0] = z;
                    return *elt[0];
                }
                else {
                   return *elt[0];
                }
            }
            else {
                if (elt[size-1] = 0) {
                    DVD *z = new DVD;
                    elt[size-1] = z;
                    return *elt[size-1];
                }
                else {
                   return *elt[size-1];
            }
            }
        }
        else if(elt[x]==0) {
            DVD *z = new DVD;
            elt[x] = z;
            return *elt[x];
        }
        else {
            return *elt[x];
        }
    }
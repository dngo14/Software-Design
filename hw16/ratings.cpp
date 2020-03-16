#include<iostream>
using namespace std;


class Rating {

int id, stars;

public:

Rating(int n, int q) {
    id = n;
    if (q>=1 && q<=5) {
        stars = q;
    }else {
        stars = 1;
    }
}

int set_stars(int star) {
    if (star>=0 && star<=5) {
        stars = star;
    }else if(star <1) {
        stars = 1;
    }else if(star>5) {
        stars = 5;
    }
    return stars;
}

int get_id() {
    return id;
}
int get_stars() {
    return stars;
}

void display(ostream &stream) {
    cout << id <<":";
    for (int i = 0; i<stars; i++) {
        cout << "*";
    }
}

};

int main() {
  Rating r(1234, 3);
  cout << "Rating r contains ";   
  r.display(cout);  
  cout << endl;
  r.set_stars(4);
  cout << "After r.set_stars(4), id=" << r.get_id() 
       << " and stars=" << r.get_stars() << endl;

  Rating *arr[8];
  int i;
  for (i = 0;  i < 8;  i++) {
    arr[i] = new Rating(100+i, i);
  }
  cout << "Ratings in array arr:  ";
  for (i = 0;  i < 8;  i++) {
    arr[i]->display(cout); cout << "  ";
  }
  cout << endl;    
}

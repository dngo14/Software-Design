#include<iostream>
using namespace std;

class Chicken {
int weight, feathers;

public:
static int num_created;

Chicken(int x, int y) {
    weight = x;
    feathers = y;
    ++num_created;
}

int get_weight() {
    return weight;
}
int get_feathers() {
    return feathers;
}
void double_weight() {
    weight*=2;
    ++num_created;
}
void pieces_of_chickens() {
    int x = num_created * 8;
    cerr << "there is " << x << " cuts of chicken" << endl;

}
};

int Chicken::num_created=0;

int main() {
    Chicken jared{23, 145}, sophia{34,167};
    cerr << "Created: " << Chicken::num_created << " chickens" << endl;
    jared.pieces_of_chickens(); 
    jared.double_weight();
    cerr << "Created: " << Chicken::num_created << " chickens" << endl; 
    jared.pieces_of_chickens(); 
}
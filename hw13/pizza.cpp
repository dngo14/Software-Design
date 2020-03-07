#include<iostream>
using namespace std;

struct Town {
  double total_pizza;
  int num_inhabitants;
  int num_students;
  double per_capita() {
    return total_pizza/num_inhabitants;
  }
  double pizza_for_students() {
      return total_pizza/num_students;
  }
  double eat_more() {
     return total_pizza = total_pizza + (total_pizza * .1);
  }
  double show_change() {
      double *i = new double [2];
     i[0] = pizza_for_students();
    i[1] = eat_more();
    i[2] = pizza_for_students();
    cerr << i[0] << "\n" << i[1] << "\n" << i[2] << "\n";
  }
};

int main() {
Town northfield {500000.1, 20007, 12000};
Town faribault {400000, 23750, 10000};
cerr << northfield.per_capita();
cerr << "\n";
cerr << faribault.per_capita();
cerr << "\n";
cerr << "northfield student pizza " << northfield.pizza_for_students();
cerr << "\n";
cerr << "faribault student pizza " << faribault.pizza_for_students();
cerr << "\n";
cerr << northfield.total_pizza << "\n";
cerr << northfield.eat_more();
cerr << "\n";
faribault.show_change();
}

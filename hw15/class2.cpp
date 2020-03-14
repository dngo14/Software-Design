#include<iostream>
using namespace std;

class heater {
    bool running;
    float temp, threshold;

    public:
    heater(bool r, float te, float th) {
        running = r;
        temp = te;
        threshold = th;
    }
void update_temp() {}
  void start() {}
  void stop() {}

  void controller() {
    if (temp > threshold) {
      if (!running) {
        start();
        running = true;
      }
    } else {
      if (running) {
        stop();
        running = false;
      }
    }
    cout << "running is " << running << "\n";
  }

};

int main() {
  heater p1(false, 10, 8), p2(false, 11, 9);
  p1.controller();
  p2.controller();
}



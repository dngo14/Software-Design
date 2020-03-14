#include<iostream>
using namespace std;

struct heater {
    bool running;
    float temp, threshold;

    void init (bool r, float te, float th) {
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
  heater p1, p2;
  p1.init(false, 10, 8);
  p1.controller();
  
  p2.controller();
  p2.init(false, 11, 9);
}




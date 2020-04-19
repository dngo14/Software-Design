#include<iostream>
using namespace std;

int main(int argc, char** argv) {
    if (argc > 2) {
        cout << "Usage: ./char1 username" << endl;
    }
    else {
        unsigned char num_messages = 0;
        char message [80];
        while (1) {
        cout << static_cast<int>(num_messages) << endl;
        cout << argv[1] << "> ";
        cin.getline(message, 80);
        if (message[0] != 0) {
            num_messages++;
    }
    }
}
}

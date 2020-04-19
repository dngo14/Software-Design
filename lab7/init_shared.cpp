#include<iostream>
#include<fstream>
using namespace std;

char *global_mem;
char fname[] = "/usr/local/cs/cs251/chat/data/Daniel.txt";


int main(int argc, char** argv) {
     
    if (argc > 2) {
        cout << "Usage: ./char1 username" << endl;
    }
    else {
        global_mem = new char [10000];
        for (int i=0; i<9999; i++) {
            global_mem[i] = '~';
        }
        for (int i=99; i<10000; i+=100) {
            global_mem[i] = '\n';
        }
        global_mem[10] = 0;

        unsigned char num_messages = global_mem[10];
        char message [80];

        while (1) {
        global_mem[10] = num_messages;
        cout << static_cast<int>(num_messages) << endl;
        cout << argv[1] << "> ";
        cin.getline(message, 80);
        if (message[0] != 0) {
            num_messages++;
    }
    ofstream f(fname);
f.write(global_mem, 10000);
f.close();
    }
}
}

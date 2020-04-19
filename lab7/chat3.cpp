#include<iostream>
#include<fstream>
using namespace std;

char *global_mem;
char fname[] = "/usr/local/cs/cs251/chat/data/Daniel.txt";

void print_at(int index, const char s[]) {
  for (int i = 0 ; i<9999; i++) {
    if (!s[i]) {
      global_mem[index+i] = 0;
      break;
    }
    global_mem[index+i] = s[i];
  }
}


void read_stream(istream &f, char array[], int max_size) {
  int num_bytes;
  if (f.good()) {
    f.read(array, max_size);
    if (f) {
      cerr << "Warning in read_stream:  did not reach end of stream after " << max_size << " characters.";
      num_bytes = max_size - 1;
    } else {
      num_bytes = f.gcount();
      if (num_bytes >= max_size) num_bytes = max_size - 1;
    }
    } else {
        cerr << "Warning in read_stream: unable to read anything\n";
        num_bytes = 0;
  }
  array[num_bytes] = 0;  // assign null at end
}

void read_file(const char fname[], char array[], int max_size) {
  ifstream f(fname);
  read_stream(f, array, max_size);
  f.close();
}

void write_message(int index, const char *author, const char *msg) {
  print_at(index+9, author);
  print_at(index+20, msg);
}

void display_messages(int num_messages) {
  for (int i = 100; i<(num_messages+1)*100; i+=100) {
    int n = 9;
    while(global_mem[i+n]!='~') {
      cout << global_mem[i+n];
      n++;
    }
    cout << " ";
    int x = 20;
    while(global_mem[i+x]!='~') {
      cout << global_mem[i+x];
      x++;
    }
    cout << '\n';
}
}

int main(int argc, char** argv) {
    if (argc > 2) {
        cout << "Usage: ./char1 username" << endl;
    }
    else {
        global_mem = new char [10000];
        global_mem[10] = 0;

        unsigned char num_messages = global_mem[10];
        char message [80];

        read_file(fname, global_mem, 10001);
        while (1) {
        global_mem[10] = num_messages;
        ofstream f(fname);
        f.write(global_mem, 10000);
        f.close();
    
        //cout << static_cast<int>(num_messages) << endl;
        display_messages(num_messages);

        cout << argv[1] << "> ";
        cin.getline(message, 80);
        read_file(fname, global_mem, 10001);
        num_messages=global_mem[10];
        if (message[0] != 0) {
            num_messages++;
            write_message((num_messages*100), argv[1], message);
    }
     cout << '\n';
    }
}
}

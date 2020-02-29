#include<iostream>
#include<fstream>
using namespace std;

const int mem_size = 10000;
char global_mem[mem_size];

void init_global_mem() {
    for (int i=0;i<mem_size;i++) {
        global_mem[i]='~';
    }
    global_mem[mem_size-1]='\0';
}

void print_at(int index, const char s[]) {
  for (int i = 0 ; i<mem_size-1; i++) {
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

void server(){
    if (global_mem[20]=='~') {
        print_at(21, "What file would you like? ");
        global_mem[20] = 'X';

    }else {
        read_file(global_mem,global_mem + 21, mem_size - 21);
    }
}

void client() {
    cout << global_mem + 21 << "\n";
    cin.getline(global_mem, 20);   
}


int main() {
    init_global_mem();
    while(1) {
    server();
    client();
  }
}

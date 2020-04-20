#include"../react.h"
#include<iostream>
#include<fstream>
using namespace std;


void write_message(int index, const char *author, const char *msg) {\
  print_at(index, time_of_day(current_time()));
  print_at(index+9, author);
  print_at(index+20, msg);
}

void display_messages(int num_messages) {
  for (int i = 100; i<(num_messages+1)*100; i+=100) {
    add_yaml("bubble.yaml",{{"time_index", i}}),add_yaml("bubble.yaml", {{"author_index", i+9}}),add_yaml("bubble.yaml", {{"msg_index", i+20}});
//     int z = 0;
//     while(global_mem[i+z]!='\0') {
//       //cout << global_mem[i+z];
//       int time_index = i+z;
//       add_yaml("bubble.yaml",{{"time_index", time_index}});
//       z++;
//     }
//     //cout << " ";
//     int n = 9;
//     while(global_mem[i+n]!='\0') {
//       //cout << global_mem[i+n];
//       int author_index = i+n;
//       add_yaml("bubble.yaml", {{"author_index", author_index}});
//       n++;
//     }
//     //cout << " ";
//     int x = 20;
//     while(global_mem[i+x]!='\0') {
//       //cout << global_mem[i+x];
//       int msg_index = i+x;
//       add_yaml("bubble.yaml", {{"msg_index", msg_index}});
//       x++;
//     }
//     //cout << '\n';
//     add_yaml("bubble.yaml", {{"indent", 50}});
// }
}
}

int main(int argc, char** argv) {
        init();
        add_yaml("scrollable.yaml");
        //global_mem[10] = 0;
        //char message [80];
        unsigned char num_messages;

          if (just_starting()) {
            global_mem[10] = 0;
  } else if (received_event()) {
        num_messages = global_mem[10];
        //display_messages(num_messages);
        char *message = global_mem + get_event_index();
        num_messages=global_mem[10];
        if (message[0] != 0) {
            num_messages++;
            global_mem[10] = num_messages;
            write_message((num_messages*100), get_user_name(), message);
    }
     //cout << '\n';
    }
    //     while (1) {
    //     global_mem[10] = num_messages;
    
    //     //cout << static_cast<int>(num_messages) << endl;
    //     display_messages(num_messages);

    //     //cout << argv[1] << "> ";
    //     //cin.getline(message, 80);
    //     num_messages=global_mem[10];
    //     if (message[0] != 0) {
    //         num_messages++;
    //         write_message((num_messages*100), argv[1], message);
    // }
    //  cout << '\n';
    // }
    display_messages(num_messages);
    const int text_input_index = 20;
    print_at(text_input_index, "");
    add_yaml("end_input.yaml",{{"index", text_input_index}});
    quit();
}

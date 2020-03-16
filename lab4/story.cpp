#include"../react.h"
  
int main() {
  init();
  print_at(5, "Once upon a time, there was a knight named Chad.\
  He traveled far and wide in search for a worthy challenger and arrived at the land of Aldia.\
  \n Option 1: Go to the city of Medina. \
  \n Option 2: Go to the local bar \n");
  print_at(300, "1");
  print_at(302, "2");
  print_at(400, "Arriving at the grand city of Medina, Chad \
  was awed at the beautiful city before him. As he walked\
  past the gateway he saw a poster for a fighting competition.\
  \n Option 1: Fight in the arena.\
  \n Option 2: Keep walking. ");
  print_at(800, "Chad found a local bar on the curvy road he was on.\
  Entering the bar, the smell of alcohal filled his nose.\
  While he was lamenting what to eat, a drunk drawf threw a punch at Chad.\
  \n Option 1: Throw a punch back\
  \n Option 2: Ignore him and get some fried chicken ");
  print_at(1300, "Chad luckily was allowed to participate in the battles.\
  Entering the arena, he was overwhelmed with the cheering of the audience.\
  His opponent was already waiting for him. As he stood in the middle of \
  of the arena, the judge told them that fight was on.\
  Chad then easily defeated his opponent with a combination of sword slashes and parries. \
  As the victor he won recognition, but also a whole lot of money!");
  print_at(1800, "In the city, Chad looked at the lively folk and children playing around in the city.\
  As he got deeper into the slums of the kingdom, he heard a scream.\
  Sprinting to the location of the voice, Chad saw thieves trying to steal \
  the money of a pretty lady. Heroically, Chad came to the rescue and stopped the thieves.\
  Soon after Chad fell in love with the lady whose name was Trisha.\
  \n Years later Chad and Trisha got married and had children. ");
  print_at(2300, "Enraged, Chad threw a massive uppercut, launching the drawf towards the wall. This then \
  started a bar brawl. Left and right, everybody started fighting each other.\
  Chad was beating up everyone that stood in his way and soon he was the only one left standing.\
  Feeling satisfied, Chad took the money from everyone and left the bar richer than before.");
  print_at(2800, "Chad ignored the drawf and made his way to the table. The smell of \
  wine, beer, roast beef, chicken, mashed potatos, rum and more permeated the air.Sitting down, Chad ordered\
  a multifarious amount of food. While eating he made some friends and started to play cards with them.\
  Gambling all of his money, Chad won big and used the money to buy everybody drinks.\
  After he used the remaining money to buy a new sword.");
  
 
 char state = get_char_at(2);
  if (just_starting()) {
    state = 'H';
    put_char_at(2, state);
  } else if (received_event()) {
    if (event_id_is("to_screen_one")) {
      state = '1';
      put_char_at(2, state);
    } else if (event_id_is("to_screen_two")) {
      state = '2';
      put_char_at(2, state);
    }else if (event_id_is("to_screen_three")) {
      state = '3';
      put_char_at(2, state);
    }else if (event_id_is("to_screen_four")) {
      state = '4';
      put_char_at(2, state);
    }else if (event_id_is("to_screen_five")) {
      state = '5';
      put_char_at(2, state);
    }else if (event_id_is("to_screen_six")) {
      state = '6';
      put_char_at(2, state);
    }else if (event_id_is("to_home_screen")) {
      state = 'H';
      put_char_at(2, state);
    }
  }
  if ('H' == state) add_yaml("story0.yaml");
  else if('1' == state) add_yaml("story1.yaml");
  else if('2' == state) add_yaml("story2.yaml");
  else if('3' == state) add_yaml("story3.yaml");
  else if('4' == state) add_yaml("story4.yaml");
  else if('5' == state) add_yaml("story5.yaml");
  else if('6' == state) add_yaml("story6.yaml");
  quit();
}
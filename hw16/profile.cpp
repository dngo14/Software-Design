#include"../react.h"

int main() {
    init();
    print_at(10, "Name: Daniel Ngo");
    print_at(50, "Class Year: 2023");
    print_at(100, "Home Country: United States");
    print_at(150, "Favorite Ice Crea: Chocolate Brownie");
    print_at(700, "Top 5 books: Percy Jackson series, The Summoner series, Artemis Foul series, Assasin's Apprentice series, and Maze Runner series");
    print_at(250, "Favorite movie: The Batman trilogy");
    print_at(300, "Favorite Song: September by Earth Wind and Fire");
    print_at(350, "Favorite Color: Black");
    print_at(400, "The greatest basketball player of all time in my opinion is Derrick Rose. In his prime he was an explosive point guard that was able to reach the rim at will anytime he wanted. His athletic ability was unatural and was shown whenever he went for a dunk.");

    add_yaml("profile.yaml");
    quit();
}
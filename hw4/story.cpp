#include<iostream>
using namespace std;

int main() {
    cerr << "Awoken in a strange new world, Alex Brine, was your average 17 year old boy from modern Earth. \n";
    cerr << "All of sudden a green, monster appeared. Short and stout this thing held a club,\n"; 
    cerr << "almost as if it was a goblin from a video game. The goblin caught a glimpse of Alex and visciously charged at him. \n";
    cerr << "Choose an option by typing in the number \n";
    cerr << "1. Run!!! \n";
    cerr << "2. Throw Hands!\n";
    int n;
    cin >> n;
    if (n==1) {
        cerr << "Alex turned around and ran as fast as he could!!\n";
        cerr << "Unfazed by his surroundings he flew by tree after tree, until he heard an explosion at the place he had awoken.\n";
        cerr << "1.Turn back?\n";
        cerr << "2. Heck no I'm turning back\n";
        cin >> n;
        if (n==1) {
            cerr << "Alex turns back to see what the explosion was.\n";
            cerr << "The moment he returned to where the goblin was, Alex saw a group of 2 people.\n";
            cerr << "One was wearing armor and held a large sword as if it was the crusades, while the other wore a robe and held some sort of staff\n";
            cerr << "Instead of one goblin, there were atleast 5 of them surrounding the 2 people.\n";
            cerr << "1.Announce presence like a badass!!\n";
            cerr << "2. Continuing watching.\n";
    }else if (n==2) {
        cerr << "Feelin like he could take the goblin, Alex rushed towards his target!\n";
        cerr << "Reaching his target, the goblin swung its club fiercely\n";
        cerr << "3. Go for a right uppercut\n";
        cerr << "4. Leg sweep\n";
        cin >> n;
        }if (n==3) {
            cerr << "Alex swung at its head\n";
            cerr << "While swinging he gets wacked in the head and knocked out\n";
        }else if (n==4) {
            cerr << "Alex sweeped the legs of the goblin\n";
            cerr << "The goblin then dropped its club allowing to pick it up\n";
            cerr << "With the club, Alex bashed the goblin\n";
            }
        }
    cerr << "To be continued\n";
}
#include<iostream>
using namespace std;

string invintory[10];
int paper_clips = 100;

void shop();

int main() {
	int room = 1;
	string input;
	do {
		switch (room) {
		case 1:
			cout << "Your in room 1, you can go south" << endl;
			cin >> input;
			if (input == "south") {
				room = 2;
			}
			break;
		case 2:
			cout << "Your in room 2, you can go north and south" << endl;
			cin >> input;
			if (input == "north") {
				room = 1;
			}
			else if (input == "south") {
				room = 3;
			}
			break;
		case 3:
			cout << "Your in room 3, you can go north" << endl;
			shop();
			cin >> input;
			if (input == "north") {
				room = 2;
			}
			break;
		} // end of switch
	} while (input != "quit"); // end of while

} // end of main


void shop() {
	cout << endl << "-----" << "Welcome to the shop!" << "-----" << endl;
	char input = 'e';
	cout << "There are many things to buy in this shop but it will cost you." << endl << "Would you like to buy one of my many trinkets?" << endl;
	while (input != 'q') {
		cout << "We have this magical charm here for 20 paper clips." << endl << "Or would you prefer this questionable monster core for 40 paper clips?" << endl;
		cin >> input;
		switch (input){
		case 'c':
			if (paper_clips >= 20) {
				cout << "You got yourself a deal!" << endl;
				paper_clips -= 20;
				invintory[0] = "charm";
			}
			else {
				cout << "Are you tring to cheat me of my stuff? Get out of here." << endl << endl << "...The Shopkeeper kicks you out...";
				input = 'q';
			}
		case 'm':
			if (paper_clips >= 40) {
				cout << "You got yourself a deal!" << endl;
				paper_clips -= 40;
				invintory[1] = "Monster core";
			}
			else {
				cout << "Are you tring to cheat me of my stuff? Get out of here." << endl << endl << "...The Shopkeeper kicks you out...";
				input = 'q';
			}
			break;
		}//end of switch

	}//end of loop

}// end of def


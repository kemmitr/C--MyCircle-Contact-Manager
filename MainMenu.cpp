#include "MainMenu.h"
#include "AddContact.h"
MainMenu::MainMenu() {
}
void MainMenu::Password() {
	cout << "Please Enter Your Password. " << endl;
	string pass;
	cin >> pass;
	if (pass != "Delta") {
		cout<<"Password incorrect please try again."<<endl;
		Password();
	}
}
//below I created a switch for the customer to use the menu.
void MainMenu::Menu() {
	AddContact con;

	cout << "!!MyCircle Contact!!" << endl;
	cout << endl;

	int selection;
	do {
		cout << "***************************" << endl;
		cout << "1. Add New Contact         " << endl;
		cout << "2. View Contacts      " << endl;
		cout << "3. Search For Contacts      " << endl;
		cout << "4. Press 0 to Shut Down Program " << endl;
		cout << "***************************" << endl;
		cin>> selection;
		switch(selection){
		case 0:
			cout<<"Shutting Down..."<<endl;
			break;
		case 1:
			con.ADD();
			break;
			default:
		case 2:
			con.view();
			break;
		case 3:
			con.find();
			break;
		}
	} while (selection != 0);
}

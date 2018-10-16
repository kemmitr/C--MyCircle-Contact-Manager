#include <iostream>
using namespace std;
#include "AddContact.h"
#include"MainMenu.h"



int main() {
//below we are calling on the MainMenu class so we can gain access to the menu. When prompted for password, use Delta.
	MainMenu menu;
	menu.Password();
	menu.Menu();


	return 0;


}

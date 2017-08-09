/////////////////////////////////////////
//FileName: main.cpp
//FileType: C++ Source File
//Author: Russell Kemmit
//Created On: 7/10/17 10:02 AM
//Last Modified: 8/7/2017
//Description: this is the main class
/////////////////////////////////////////

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

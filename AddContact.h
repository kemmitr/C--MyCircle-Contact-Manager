#include"MainMenu.h"
#include <iostream>
#include<cstdlib>
#include<map>
#include<vector>
using namespace std;
#ifndef ADDCONTACT_H_
#define ADDCONTACT_H_

//below we create a map and a iterator for the map
class AddContact {
public:
	std::map<int, AddContact> people;
	map<int, AddContact>::iterator it ;

private:
	string ContactName;
	long long ContactPhone;
	string Address;
	string Email;
	string Skype;



public:
	AddContact();
    AddContact(string ContactName, long long ContactPhone, string Address, string Email, string Skype);
    void ADD();
	void print()const;
	void view();
	void Menu();
	void Password();
	void find();
};

#endif /* ADDCONTACT_H_ */

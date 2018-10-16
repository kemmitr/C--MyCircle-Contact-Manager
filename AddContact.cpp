#include "AddContact.h"
AddContact::AddContact(): ContactName(""), ContactPhone(0), Address(""), Email(""), Skype(""){

}
AddContact::AddContact(string ContactName, long long ContactPhone, string Address, string Email, string Skype) {
	this->ContactName = ContactName;
	this->ContactPhone = ContactPhone;
	this->Address = Address;
	this->Email = Email;
	this->Skype = Skype;
}

void AddContact::ADD() {
	MainMenu men;

//below we create a for loop to fill our map
	for (int i = 0; i < 1; i++) {
		int temp0;
		cout << "Please Enter Contact ID: " << endl;
				cin >> temp0;
		string temp1;
		cout << "Please Enter Contact Name: " << endl;
		cin >> temp1;
		long long temp2;
		cout << "Please Enter Contact Phone Number: " << endl;
		cin >> temp2;
			string temp3 = "";
			cout << "Please enter contact Address: " << endl;
			cin>> temp3;
			getline(cin, temp3);
			string temp4= "";
			cout << "Please enter contact Email: " << endl;
			cin >> temp4;
			string temp5 = "";
			cout << "Please enter contact Skype: " << endl;
			cin >> temp5;
//below is how the data is being filled into the map.
			people[temp0] = AddContact(temp1, temp2, temp3, temp4, temp5);

}
}
//print method was created so it could be called on the method "view"
void AddContact::print()const{

	cout<<"\tName: "<<ContactName<<"\tPhone Number: "<<ContactPhone<<"\tAddress: "<<Address<<"\tEmail: "<<Email<<"\tSkype: "<<Skype<<endl;
}
//below in method view, the for loop will run through the loop until empty
void AddContact::view(){
		for(map<int, AddContact>::iterator it = people.begin(); it != people.end();it++){
			int id =  it->first;
			cout << id << ": "<<flush;

					it->second.print();
				}

	}
//the find method was created to locate individual contacts by their given ID, we used .find to do this.
void AddContact::find(){
	 int t;
	    cout<<"Please Enter Contact ID: "<<endl;
	    cin>>t;
	    it = people.find(t);
	    if(it == people.end()){
	            cout << "Key-value pair not present in map" ;
	    }
	        else{
	        	int id =  it->first;
	        	cout << id << ": "<<flush;
	        	it->second.print();
	        }

}




#include "Staff.h"

//Staff inherits from UniversityMember and has a composition with AccessCard
//It passes name and memberID to the parent class constructor
//and uses initialization list to set the card object
Staff::Staff(string name, int memberID, double salary, AccessCard card): UniversityMember(name, memberID), card(card){
	this->salary = salary;											//initializes salary

}

double Staff::getSalary(){											//getter function for salary
	return salary;													//returns the value of salary

}

void Staff::displayRole(){
	cout << "------------ Staff Details ------------" << endl;
	cout << "Role: Staff" << endl;									//displays the role
	cout << "Name: " << getName() << endl;							//calls the inherited getName() and prints it
	cout << "ID: " << getMemberID() << endl;						//calls the inherited getMemberID() and prints it
	cout << "Salary($): " << salary << endl;						//prints the staff's salary in dollars

}

void Staff::displayCard(){
	card.displayCardInfo();											//forwards the requests to the AccessCard's own display method

}
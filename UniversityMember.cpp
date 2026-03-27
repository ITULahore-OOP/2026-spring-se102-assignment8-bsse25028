#include "UniversityMember.h"

UniversityMember::UniversityMember(string name, int memberID){
	this->name = name;
	this->memberID = memberID;

}

UniversityMember::~UniversityMember(){
	cout << "UniversityMember destructor called!" << endl;
}

string UniversityMember::getName(){
	return name;

}

int UniversityMember::getMemberID(){
	return memberID;

}


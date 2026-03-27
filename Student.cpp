#include "Student.h"

//Student inherits from UniversityMember
//It passes name and memberID to the parent class constructor
Student::Student(string name, int memberID, double cgpa): UniversityMember(name, memberID){
	this->cgpa = cgpa;												//initializes student's cgpa

}

double Student::getCGPA(){											//getter function for cgpa
	return cgpa;													//returns the value of cgpa

}

void Student::updateCGPA(double newCGPA){							//setter function for cgpa
	cgpa = newCGPA;													//overwriting the old cgpa's with the new cgpa

}

void Student::displayRole(){
	cout << "------------ Student Details ------------" << endl;
	cout << "Role: Student" << endl;								//displays the role
	cout << "Name: " << getName() << endl;							//calls the inherited getName() and prints it
	cout << "ID: " << getMemberID() << endl;						//calls the inherited getMemberID() and prints it
	cout << "CGPA: " << cgpa << endl;								//prints the cgpa value

}

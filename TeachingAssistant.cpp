#include "TeachingAssistant.h"

//initializes TA by passes data to Student, Staff and the shared UniversityMember base class
TeachingAssistant::TeachingAssistant(string name, int memberID, double cgpa, double salary, AccessCard card, int workingHours)
				: UniversityMember(name, memberID), Student(name, memberID, cgpa), Staff(name, memberID, salary, card){
	this->workingHours = workingHours;                                     //assigns TA working hours to the member variable

}

void TeachingAssistant::displayRole(){
	cout << "------------ Teaching Assistant Details ------------" << endl;
	cout << "Role: Teaching Assistant" << endl;							//prints the role
	cout << "Name: " << getName() << endl;								//retrieves name from the base class
	cout << "ID: " << getMemberID() << endl;							//retrieves ID from the base class
	cout << "Salary($): " << getSalary() << endl;						//retrieves salary from Staff component
	cout << "CGPA: " << getCGPA() << endl;								//retrieves cgpa from Student component
	cout << "Working Hours: " << workingHours << endl;					//prints the TA working hours

}

void TeachingAssistant::gradeAssignment(int score){
	cout << "(Marked by " << getName() << ") obtained numeric score: " << score << "/100" << endl;
	//prints the TA's name and the assigned score out of 100

}

void TeachingAssistant::gradeAssignment(string letterGrade){
	cout << "(Marked by " << getName() << ") letter grade: " << letterGrade << endl;
	//prints the TA's name along with the assigned letter grade

}
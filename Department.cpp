#include "Department.h"

Department::Department(string departmentName){				//Department class constructor
	this->departmentName = departmentName;					//initializes departmentName
	memberCount = 0;										//initializes memberCount to 0

}

void Department::addMember(UniversityMember* member){
	if(memberCount < 50){									//check ensures that the members do not exceed the limit
		this->members[memberCount] = member;				//stores the pointer in the current index
		memberCount++;										//increases the member count
	}

}

void Department::displayAllRoles(){
	cout << "----------- Department Information -----------" << endl;
	for(int i=0; i < memberCount; i++){						//loops through each member
		members[i]->displayRole();							//displays each member's role
	}
}
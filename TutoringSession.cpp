#include "TutoringSession.h"

//TutoringSession class constructor which also establishes an association with TeachingAssistant and Student classes
TutoringSession::TutoringSession(int sessionID, double durationMinutes, TeachingAssistant* ta, Student* student){
	this->sessionID = sessionID;								//assigns sessionID to the member variable
	this->durationMinutes = durationMinutes;					//assigns durationMinutes to the member variable
	this->ta = ta;												//stores a pointer to the assigned teaching assistant
	this->student = student;									//stores a pointer to the assigned student

}

double TutoringSession::getDuration(){							//getter function for the session's duration time
	return durationMinutes;										//so we return durationMinutes

}

void TutoringSession::displaySession(){
	cout << "--------- Session Details ---------" << endl;
	cout << "Session ID: " << sessionID << endl;						//displaying session ID
	cout << "Duration Minutes: " << durationMinutes << endl;			//displaying the session's duration time
	cout << "Assigned TA: " << ta->getName() << endl;					//accesses the TA object to print their name
	cout << "Student: " << student->getName() << endl;					//accesses the Student object to print their name

}

TutoringSession TutoringSession::operator+(const TutoringSession& other){
	double combinedSessionDuration = this->durationMinutes + other.durationMinutes;				//calculates the total session's time
	return TutoringSession(this->sessionID, combinedSessionDuration, this->ta, this->student);	//returns new TutoringSession object with the combined duration

}

bool operator>(TutoringSession s1, TutoringSession s2){
	if(s1.getDuration() > s2.getDuration()){	//if the session duration of the first session is greater than the second one
		return true;							//we return true
	}
	return false;								//else we return false

}



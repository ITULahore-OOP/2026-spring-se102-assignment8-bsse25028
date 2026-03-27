#ifndef TUTORINGSESSION_H
#define TUTORINGSESSION_H
#include <iostream>
#include <string>
#include "TeachingAssistant.h"
#include "Student.h"

using namespace std;

class TutoringSession{
	private:
		int sessionID;
		double durationMinutes;
		TeachingAssistant* ta;
		Student* student;
	public:
		TutoringSession(int sessionID, double durationMinutes, TeachingAssistant* ta, Student* student);
		double getDuration();
		void displaySession();
		TutoringSession operator+(const TutoringSession& other);
};

bool operator>(TutoringSession s1, TutoringSession s2);

#endif

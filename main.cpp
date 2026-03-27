#include <iostream>
#include <string>
#include "AccessCard.h"
#include "Student.h"
#include "Staff.h"
#include "Department.h"
#include "TutoringSession.h"
#include "TeachingAssistant.h"

using namespace std;


int main(){

    AccessCard c1("AEIOU001", 1);                                        //creating AccessCard object
    AccessCard c2("AEIOU002", 2);                                        //creating AccessCard object
    AccessCard c3("AEIOU003", 3);                                        //creating AccessCard object

    Student std1("Kameron Almus", 5674, 2.4);                            //creating Student object
    Student std2("John Jr", 3325, 3.0);                                  //creating Student object

    Staff s1("Dr. Jennifer Herley", 3219, 75000, c1);                    //creating Staff object

    TeachingAssistant ta1("Ammy Smith", 8907, 3.7, 15000, c2, 20);       //creating TeachingAssistant object
    TeachingAssistant ta2("Jack Jill", 2455, 3.9, 16000, c3, 25);        //creating TeachingAssistant object

    cout << "---------- DISPLAYING INFOMATION ----------" << endl;
    std1.displayRole();
    cout << endl;
    s1.displayRole();
    cout << endl;
    ta1.displayRole();
    cout << endl;

    cout << "---------- DISPLAYING TA GRADING ----------" << endl;
    ta2.gradeAssignment(85);
    ta2.gradeAssignment("A-");
    cout << endl;

    //adding members to the department
    Department dep1("Faculty of Engineering");
    dep1.addMember(&std1);
    dep1.addMember(&std2);
    dep1.addMember(&ta1);
    dep1.addMember(&ta2);
    dep1.addMember(&s1);

    dep1.displayAllRoles();
    cout << endl;

    TutoringSession sess1(1001, 60.0, &ta1, &std1);                        //creating TutoringSession object
    TutoringSession sess2(1002, 90.0, &ta1, &std2);                        //creating TutoringSession object

    cout << "---------- DISPLAYING TA SESSION ----------" << endl;
    sess1.displaySession();
    cout << endl;
    sess1.displaySession();
    cout << endl;

    cout << "---------- COMBINED TA SESSION ----------" << endl;
    TutoringSession comb = sess1 + sess2;
    cout << "Combined session duration (minutes): " << comb.getDuration() << endl;
    cout << endl;

    cout << "---------- COMPARING THE TWO TA SESSIONS ----------" << endl;
    if(sess1 > sess2){
        cout << "Session 1 is longer than Session 2" << endl;
    }
    else{
        cout << "Session 1 is shorter than Session 2" << endl;
    }
    cout << endl;



return 0;

}
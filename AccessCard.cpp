#include "AccessCard.h"

AccessCard::AccessCard(string cardID, int accessLevel){						//AcsessCard class constructor
	this->cardID = cardID;													//initializing ID
	this->accessLevel = accessLevel;										//initializing access level

}

string AccessCard::getCardID(){												//getter function for ID
	return cardID;															//returns the value of cardID

}

int AccessCard::getAccessLevel(){											//getter function for access level integer
	return accessLevel;														//returns the value of accessLevel

}

void AccessCard::displayCardInfo(){
	cout << "----------- AccessCard Information -----------" << endl;
	cout << "Card ID: " << cardID << endl;									//displaying Id
	cout << "Access Level: " << accessLevel << endl;						//displaying access level

}

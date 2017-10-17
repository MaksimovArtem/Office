#include "Developer.h"



Developer::Developer(std::string dName, std::string dLastname, std::string dEmail, unsigned int dHours, unsigned int dMultiplier)
	: Worker(dName,dLastname,dEmail,dHours,dMultiplier)
{
	boss = nullptr;
}

Worker * Developer::getBoss()
{
	return (Worker *)boss;
}

void Developer::setBoss(Worker *newBoss)
{
	if ((this->getBoss()!=nullptr))
	{
		this->getBoss()->delSubordinates(this);
	}
	else {
		
		boss = (TeamLeader *)newBoss;
		newBoss->addSubordinates(this);
	}
	
}

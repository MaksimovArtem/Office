#include "TeamLeader.h"



TeamLeader::TeamLeader(std::string tName, std::string tLastname, std::string tEmail, unsigned int tHours, unsigned int tMultiplier)
	: Worker(tName, tLastname, tEmail, tHours, tMultiplier)
{
	boss = nullptr;
}

Worker * TeamLeader::getBoss()
{
	return (Worker *)boss;
}

void TeamLeader::setBoss(Worker *newBoss)
{
	if ((this->getBoss() != nullptr))
	{
		this->getBoss()->delSubordinates(this);
	}
	boss = (Manager *) newBoss;
	newBoss->addSubordinates(this);
	

}

std::vector<Worker *> TeamLeader::getSubordinates() 
{
	return tSubordinates;
}

std::vector<Worker *> TeamLeader::addSubordinates(Worker *worker)
{
	tSubordinates.push_back(worker);
	return tSubordinates;
}

std::vector<Worker *> TeamLeader::delSubordinates(Worker *worker)
{
	std::vector<Worker *>::iterator it;

	for (it = tSubordinates.begin(); it != tSubordinates.end(); ++it)
	{
		if (*it == worker)
		{
			break;
		}
	}
	tSubordinates.erase(it);
	return tSubordinates;
	
}



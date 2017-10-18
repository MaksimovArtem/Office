#include "Developer.h"



Developer::Developer(std::string dName, std::string dLastname, std::string dEmail, unsigned int dHours, unsigned int dMultiplier)
	: Worker(dName,dLastname,dEmail,dHours,dMultiplier)
{
	boss = nullptr;
}

Worker * Developer::getBossPointer()
{
	return (Worker *)boss;
}

std::string Developer::getBossName()
{
	return getBossPointer()->toString(getBossPointer());
}

void Developer::setBoss(Worker *newBoss)
{
	if ((this->getBossPointer()!=nullptr))
	{
		this->getBossPointer()->delSubordinates(this);
	}
	boss = (TeamLeader *)newBoss;
	newBoss->addSubordinates(this);
	getBossName();
	std::cout << "Worker: [" << this->toString(this) << "] now have [" << this->getBossName() << "] as boss" << std::endl;
	
}

std::vector<Worker *> Developer::getSubordinates()
{
	std::cout << "This worker has no subordinates";
	std::vector<Worker *> result;
	return result;
}

std::vector<Worker *> Developer::addSubordinates(Worker * worker)
{
	std::cout << "This worker has no subordinates";
	std::vector<Worker *> result;
	return result;
}

std::vector<Worker *> Developer::delSubordinates(Worker *worker)
{
	std::cout << "This worker has no subordinates";
	std::vector<Worker *> result;
	return result;
}


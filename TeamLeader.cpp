#include "TeamLeader.h"



TeamLeader::TeamLeader(std::string tName, std::string tLastname, std::string tEmail, unsigned int tHours, unsigned int tMultiplier)
	: Worker(tName, tLastname, tEmail, tHours, tMultiplier)
{
	boss = nullptr;
}

Worker * TeamLeader::getBossPointer()
{
	return (Worker *)boss;
}

std::string TeamLeader::getBossName()
{
	return getBossPointer()->toString(getBossPointer());
}

void TeamLeader::setBoss(Worker *newBoss)
{
	if ((this->getBossPointer() != nullptr))
	{
		this->getBossPointer()->delSubordinates(this);
	}
	boss = (Manager *) newBoss;
	newBoss->addSubordinates(this);

	std::cout << "Worker: [" << this->toString(this) << "] now have [" << this->getBossName() << "] as boss" << std::endl;

}

std::vector<Worker *> TeamLeader::getSubordinates() 
{
	std::cout <<"Boss ["<<this->toString(this)<<"] has ["<< subordinatesToString()<<"] in workers list" << std::endl;
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

std::string TeamLeader::subordinatesToString()
{
	std::string result;
	
	for (auto &item : tSubordinates)
	{
		result += item->toString(item) + "; ";
	}
	return result;
	
}

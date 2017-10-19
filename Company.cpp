#include "Company.h"



Company::Company()
{
}

Developer * Company::createDeveloperToTeamleader(std::string name_, std::string lastname_, std::string email_,
	unsigned int hours_, unsigned int mult_, TeamLeader *teamleader)
{
	Developer *developer = new Developer(name_,lastname_,email_,hours_,mult_);
	developer->setBoss(teamleader);
	return developer;
}

void Company::giveDeveloperToTeamleader(Developer *developer , TeamLeader *teamleader)
{
	developer->setBoss(teamleader);
}

void Company::deleteDeveloper(Developer *developer)
{
	delete developer;
	if (developer->getBossPointer() != nullptr)
	{
		(developer->getBossPointer())->delSubordinates(developer);
	}
}


TeamLeader * Company::createTeamleaderToManager(std::string name_, std::string lastname_, std::string email_,
	unsigned int hours_, unsigned int mult_, Manager *manager)
{
	TeamLeader *teamleader = new TeamLeader(name_, lastname_, email_, hours_, mult_);
	teamleader->setBoss(manager);
	return teamleader;
}

void Company::giveTeamleaderToManager(TeamLeader *teamleader, Manager *manager)
{
	teamleader->setBoss(manager);
}

void Company::showDevelopers(TeamLeader *teamleader)
{
	teamleader->getSubordinates();
}

void Company::deleteTeamleader(TeamLeader *teamleader)
{
	delete teamleader;
	if (teamleader -> getBossPointer() != nullptr)
	{
		(teamleader->getBossPointer())->delSubordinates(teamleader);
	}
}

void Company::addDeveloperToTeamLeader(Developer *developer, TeamLeader *teamleader)
{
	teamleader->addSubordinates(developer);
	(developer->getBossPointer())->delSubordinates(developer);
}

void Company::delDeveloperFromTeamLeader(Developer *developer, TeamLeader *teamleader)
{
	teamleader->delSubordinates(developer);
}

Manager * Company::createManager(std::string name_, std::string lastname_, std::string email_,
	unsigned int hours_, unsigned int mult_)
{
	Manager *manager = new Manager(name_, lastname_, email_, hours_, mult_);
	return manager;
}

void Company::showTeamleaders(Manager *manager)
{
	manager->getSubordinates();
}

void Company::deleteManager(Manager * manager)
{
	delete manager;
}


#ifndef COMPANY_H
#define COMPANY_H
#include "Developer.h"
#include "TeamLeader.h"
#include "Manager.h"

#include <string>

class Company
{

public:
	//For Developers
	Developer * createDeveloperToTeamleader(std::string, std::string, std::string, unsigned int, unsigned int, TeamLeader *);
	void giveDeveloperToTeamleader(Developer *, TeamLeader*);
	void deleteDeveloper(Developer *);

	//For Teamleaders
	TeamLeader * createTeamleaderToManager(std::string, std::string, std::string, unsigned int, unsigned int, Manager *);
	void giveTeamleaderToManager(TeamLeader *, Manager *);
	void showDevelopers(TeamLeader *);
	void addDeveloperToTeamLeader(Developer *, TeamLeader *);
	void delDeveloperFromTeamLeader(Developer *, TeamLeader *);
	void deleteTeamleader(TeamLeader *);

	//For Managers
	Manager * createManager(std::string, std::string, std::string, unsigned int, unsigned int);
	void showTeamleaders(Manager *);
	void deleteManager(Manager *);

	Company();
	~Company() = default;
};

#endif
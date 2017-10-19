
#include "Accounting.h"
#include "HR.h"
#include "Worker.h"
#include "Developer.h"
#include "Manager.h"
#include "TeamLeader.h"
#include "Company.h"
#include <iostream>

std::ostream& operator<<(std::ostream& str, Worker *worker)
{
	return str << worker->toString();
}

int main()
{
	/*
	Manager manager1("Ivan", "Ivanov", "1@m.ru", 300, 30);
	Manager manager2("Vasia", "Vasianovich", "2@m.ru", 50, 30);

	TeamLeader teamleader1("q", "q", "1@t.ru", 150, 20);
	TeamLeader teamleader2("q2", "q", "2@t.ru", 170, 20);
	TeamLeader teamleader3("q3", "q", "3@t.ru", 220, 20);
	
	Developer developer1("Vasian1", "L", "1@d.ru", 310, 10);
	Developer developer2("Vasian2", "L", "2@d.ru", 215, 10);
	Developer developer3("Vasian3", "L","3@d.ru", 276, 10);
	Developer developer4("Vasian4", "L", "4@d.ru", 190, 10);
	Developer developer5("Vasian5", "L", "5@d.ru", 120, 10);
	*/

	Company company;
	Manager * manager1 = company.createManager("Ivan", "Ivanov", "1@m.ru", 300, 30);
	Manager * manager2 = company.createManager("Vasia", "Vasianovich", "2@m.ru", 50, 30);

	TeamLeader * teamleader1 = company.createTeamleaderToManager("q1", "q", "1@t.ru", 150, 20, manager1);
	TeamLeader * teamleader2 = company.createTeamleaderToManager("q2", "q", "2@t.ru", 170, 20, manager1);
	TeamLeader * teamleader3 = company.createTeamleaderToManager("q3", "q", "3@t.ru", 220, 20, manager2);

	Developer * developer1 = company.createDeveloperToTeamleader("Vasian1", "L", "1@d.ru", 310, 10, teamleader1);
	Developer * developer2 = company.createDeveloperToTeamleader("Vasian2", "L", "2@d.ru", 215, 10, teamleader1);
	Developer * developer3 = company.createDeveloperToTeamleader("Vasian3", "L", "3@d.ru", 276, 10, teamleader2);
	Developer * developer4 = company.createDeveloperToTeamleader("Vasian4", "L", "4@d.ru", 190, 10, teamleader2);
	Developer * developer5 = company.createDeveloperToTeamleader("Vasian5", "L", "5@d.ru", 120, 10,teamleader3);

	std::cout << "Worker: [" << developer1 << "] now have [" << developer1->getBossName() << "] as boss" << std::endl;
	std::cout << "Worker: [" << developer2 << "] now have [" << developer2->getBossName() << "] as boss" << std::endl;
	std::cout << "Worker: [" << developer3 << "] now have [" << developer3->getBossName() << "] as boss" << std::endl;
	std::cout << "Worker: [" << developer4 << "] now have [" << developer4->getBossName() << "] as boss" << std::endl;
	std::cout << "Worker: [" << developer5 << "] now have [" << developer5->getBossName() << "] as boss" << std::endl;
	std::cout << std::endl;

	std::cout << "Worker: [" << teamleader1 << "] now have [" << teamleader1->getBossName() << "] as boss" << std::endl;
	std::cout << "Worker: [" << teamleader2 << "] now have [" << teamleader2->getBossName() << "] as boss" << std::endl;
	std::cout << "Worker: [" << teamleader3 << "] now have [" << teamleader3->getBossName() << "] as boss" << std::endl;
	std::cout << std::endl;
	
	std::cout << "Boss [" << teamleader1 << "] has [" << teamleader1->subordinatesToString() << "] in workers list" << std::endl;
	std::cout << "Boss [" << teamleader2 << "] has [" << teamleader2->subordinatesToString() << "] in workers list" << std::endl;
	std::cout << "Boss [" << teamleader3 << "] has [" << teamleader3->subordinatesToString() << "] in workers list" << std::endl;
	std::cout << std::endl;

	developer1->setBoss(teamleader2);
	std::cout << "Worker: [" << developer1 << "] now have [" << developer1->getBossName() << "] as boss" << std::endl;
	std::cout << std::endl;

	teamleader1->getSubordinates();
	std::cout << "Teamleader [" << teamleader1 << "] has [" << teamleader1->subordinatesToString() << "] in workers list" << std::endl;
	teamleader2->getSubordinates();
	std::cout << "Teamleader [" << teamleader2 << "] has [" << teamleader2->subordinatesToString() << "] in workers list" << std::endl;
	teamleader3->getSubordinates();
	std::cout << "Teamleader [" << teamleader3 << "] has [" << teamleader3->subordinatesToString() << "] in workers list" << std::endl;
	std::cout << std::endl;

	manager1->getSubordinates();
	std::cout << "Manager [" << manager1 << "] has [" << manager1->subordinatesToString() << "] in workers list" << std::endl;
	manager2->getSubordinates();
	std::cout << "Manager [" << manager2 << "] has [" << manager2->subordinatesToString() << "] in workers list" << std::endl;
	std::cout << std::endl;

	teamleader1->setBoss(manager2);
	std::cout << "Worker: [" << teamleader1 << "] now have [" << teamleader1->getBossName() << "] as boss" << std::endl;
	std::cout << std::endl;

	manager1->getSubordinates();
	std::cout << "Manager [" << manager1 << "] has [" << manager1->subordinatesToString() << "] in workers list" << std::endl;
	manager2->getSubordinates();
	std::cout << "Manager [" << manager2 << "] has [" << manager2->subordinatesToString() << "] in workers list" << std::endl;
	std::cout << std::endl;

	teamleader1->getSubordinates();
	std::cout << "Teamleader [" << teamleader1 << "] has [" << teamleader1->subordinatesToString() << "] in workers list" << std::endl;
	teamleader2->getSubordinates();
	std::cout << "Teamleader [" << teamleader2 << "] has [" << teamleader2->subordinatesToString() << "] in workers list" << std::endl;
	teamleader3->getSubordinates();
	std::cout << "Teamleader [" << teamleader3 << "] has [" << teamleader3->subordinatesToString() << "] in workers list" << std::endl;
	std::cout << std::endl;

	std::cout << "Salary of " << developer1 << " equals " << developer1->getSalary() << std::endl;
	std::cout << "Salary of " << developer2 << " equals " << developer2->getSalary() << std::endl;
	std::cout << "Salary of " << developer3 << " equals " << developer3->getSalary() << std::endl;
	std::cout << "Salary of " << developer4 << " equals " << developer4->getSalary() << std::endl;
	std::cout << "Salary of " << developer5 << " equals " << developer5->getSalary() << std::endl;
	std::cout << std::endl;
	std::cout << "Salary of " << teamleader1 << " equals " << teamleader1->getSalary() << std::endl;
	std::cout << "Salary of " << teamleader2 << " equals " << teamleader2->getSalary() << std::endl;
	std::cout << "Salary of " << teamleader3 << " equals " << teamleader3->getSalary() << std::endl;
	std::cout << std::endl;
	std::cout << "Salary of " << manager1 << " equals " << manager1->getSalary() << std::endl;
	std::cout << "Salary of " << manager2 << " equals " << manager2->getSalary() << std::endl;

	std::cin.get();
	std::cin.get();
}

#include "Accounting.h"
#include "HR.h"
#include "Worker.h"
#include "Developer.h"
#include "Manager.h"
#include "TeamLeader.h"

#include <iostream>

int main()
{
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
	
	developer1.setBoss(&teamleader1);
	std::cout << "Worker: [" << developer1.toString(&developer1) << "] now have [" << developer1.getBossName() << "] as boss" << std::endl;
	developer2.setBoss(&teamleader1);
	std::cout << "Worker: [" << developer2.toString(&developer2) << "] now have [" << developer2.getBossName() << "] as boss" << std::endl;
	developer3.setBoss(&teamleader2);
	std::cout << "Worker: [" << developer3.toString(&developer3) << "] now have [" << developer3.getBossName() << "] as boss" << std::endl;
	developer4.setBoss(&teamleader2);
	std::cout << "Worker: [" << developer4.toString(&developer4) << "] now have [" << developer4.getBossName() << "] as boss" << std::endl;
	developer5.setBoss(&teamleader3);
	std::cout << "Worker: [" << developer5.toString(&developer5) << "] now have [" << developer5.getBossName() << "] as boss" << std::endl;
	std::cout << std::endl;

	teamleader1.setBoss(&manager1);
	std::cout << "Worker: [" << teamleader1.toString(&teamleader1) << "] now have [" << teamleader1.getBossName() << "] as boss" << std::endl;
	teamleader2.setBoss(&manager1);
	std::cout << "Worker: [" << teamleader2.toString(&teamleader2) << "] now have [" << teamleader2.getBossName() << "] as boss" << std::endl;
	teamleader3.setBoss(&manager2);
	std::cout << "Worker: [" << teamleader3.toString(&teamleader3) << "] now have [" << teamleader3.getBossName() << "] as boss" << std::endl;
	std::cout << std::endl;
	
	teamleader1.getSubordinates();
	std::cout << "Boss [" << teamleader1.toString(&teamleader1) << "] has [" << teamleader1.subordinatesToString() << "] in workers list" << std::endl;
	teamleader2.getSubordinates();
	std::cout << "Boss [" << teamleader2.toString(&teamleader2) << "] has [" << teamleader2.subordinatesToString() << "] in workers list" << std::endl;
	teamleader3.getSubordinates();
	std::cout << "Boss [" << teamleader3.toString(&teamleader3) << "] has [" << teamleader1.subordinatesToString() << "] in workers list" << std::endl;
	std::cout << std::endl;

	developer1.setBoss(&teamleader2);
	std::cout << "Worker: [" << developer1.toString(&developer1) << "] now have [" << developer1.getBossName() << "] as boss" << std::endl;
	std::cout << std::endl;

	teamleader1.getSubordinates();
	std::cout << "Teamleader [" << teamleader1.toString(&teamleader1) << "] has [" << teamleader1.subordinatesToString() << "] in workers list" << std::endl;
	teamleader2.getSubordinates();
	std::cout << "Teamleader [" << teamleader2.toString(&teamleader2) << "] has [" << teamleader2.subordinatesToString() << "] in workers list" << std::endl;
	teamleader3.getSubordinates();
	std::cout << "Teamleader [" << teamleader3.toString(&teamleader3) << "] has [" << teamleader3.subordinatesToString() << "] in workers list" << std::endl;
	std::cout << std::endl;

	manager1.getSubordinates();
	std::cout << "Manager [" << manager1.toString(&manager1) << "] has [" << manager1.subordinatesToString() << "] in workers list" << std::endl;
	manager2.getSubordinates();
	std::cout << "Manager [" << manager2.toString(&manager2) << "] has [" << manager2.subordinatesToString() << "] in workers list" << std::endl;
	std::cout << std::endl;

	teamleader1.setBoss(&manager2);
	std::cout << "Worker: [" << teamleader1.toString(&teamleader1) << "] now have [" << teamleader1.getBossName() << "] as boss" << std::endl;
	std::cout << std::endl;

	manager1.getSubordinates();
	std::cout << "Manager [" << manager1.toString(&manager1) << "] has [" << manager1.subordinatesToString() << "] in workers list" << std::endl;
	manager2.getSubordinates();
	std::cout << "Manager [" << manager2.toString(&manager2) << "] has [" << manager2.subordinatesToString() << "] in workers list" << std::endl;
	std::cout << std::endl;

	teamleader1.getSubordinates();
	std::cout << "Teamleader [" << teamleader1.toString(&teamleader1) << "] has [" << teamleader1.subordinatesToString() << "] in workers list" << std::endl;
	teamleader2.getSubordinates();
	std::cout << "Teamleader [" << teamleader2.toString(&teamleader2) << "] has [" << teamleader2.subordinatesToString() << "] in workers list" << std::endl;
	teamleader3.getSubordinates();
	std::cout << "Teamleader [" << teamleader3.toString(&teamleader3) << "] has [" << teamleader3.subordinatesToString() << "] in workers list" << std::endl;
	std::cout << std::endl;

	std::cout << "Salary of " << developer1.toString(&developer1) << " equals " << developer1.getSalary() << std::endl;
	std::cout << "Salary of " << developer2.toString(&developer2) << " equals " << developer2.getSalary() << std::endl;
	std::cout << "Salary of " << developer3.toString(&developer3) << " equals " << developer3.getSalary() << std::endl;
	std::cout << "Salary of " << developer4.toString(&developer4) << " equals " << developer4.getSalary() << std::endl;
	std::cout << "Salary of " << developer5.toString(&developer5) << " equals " << developer5.getSalary() << std::endl;
	std::cout << std::endl;
	std::cout << "Salary of " << teamleader1.toString(&teamleader1) << " equals " << teamleader1.getSalary() << std::endl;
	std::cout << "Salary of " << teamleader2.toString(&teamleader2) << " equals " << teamleader2.getSalary() << std::endl;
	std::cout << "Salary of " << teamleader3.toString(&teamleader3) << " equals " << teamleader3.getSalary() << std::endl;
	std::cout << std::endl;
	std::cout << "Salary of " << manager1.toString(&manager1) << " equals " << manager1.getSalary() << std::endl;
	std::cout << "Salary of " << manager2.toString(&manager2) << " equals " << manager2.getSalary() << std::endl;

	std::cin.get();
	std::cin.get();
}
//есть manager'ы teamleader'ы developer'ы
//каждый хранит вектор указателей на свою команду и указатель на начальника

#include "Accounting.h"
#include "HR.h"
#include "Worker.h"
#include "Developer.h"
#include "Manager.h"
#include "TeamLeader.h"

#include <iostream>

int main()
{
	Manager manager1("Ivan", "Ivanov", "1@m.ru", 3000, 30);
	Manager manager2("Vasia", "Vasianovich", "2@m.ru", 50, 30);

	TeamLeader teamleader1("q", "q", "1@t.ru", 150, 20);
	TeamLeader teamleader2("q2", "q", "2@t.ru", 1500, 20);
	TeamLeader teamleader3("q3", "q", "3@t.ru", 354, 20);
	
	Developer developer1("Vasian1", "L", "1@d.ru", 1000, 10);
	Developer developer2("Vasian2", "L", "2@d.ru", 500, 10);
	Developer developer3("Vasian3", "L","3@d.ru", 6500, 10);
	Developer developer4("Vasian4", "L", "4@d.ru", 900, 10);
	Developer developer5("Vasian5", "L", "5@d.ru", 10, 10);
	
	developer1.setBoss(&teamleader1);
	developer2.setBoss(&teamleader1);
	developer3.setBoss(&teamleader2);
	developer4.setBoss(&teamleader2);
	developer5.setBoss(&teamleader3);
	std::cout << std::endl;

	teamleader1.setBoss(&manager1);
	teamleader2.setBoss(&manager1);
	teamleader3.setBoss(&manager2);
	std::cout << std::endl;
	
	teamleader1.getSubordinates();
	teamleader2.getSubordinates();
	teamleader3.getSubordinates();
	std::cout << std::endl;

	developer1.setBoss(&teamleader2);
	std::cout << std::endl;

	teamleader1.getSubordinates();
	teamleader2.getSubordinates();
	teamleader3.getSubordinates();
	std::cout << std::endl;

	manager1.getSubordinates();
	manager2.getSubordinates();
	std::cout << std::endl;

	teamleader1.setBoss(&manager2);
	std::cout << std::endl;
	manager1.getSubordinates();
	manager2.getSubordinates();
	std::cout << std::endl;

	teamleader1.getSubordinates();
	teamleader2.getSubordinates();
	teamleader3.getSubordinates();
	std::cout << std::endl;

	std::cout << "Salary of " << developer1.toString(&developer1) << " equals " << developer1.getSalary() << std::endl;
	std::cout << "Salary of " << developer2.toString(&developer2) << " equals " << developer2.getSalary() << std::endl;
	std::cout << "Salary of " << developer3.toString(&developer3) << " equals " << developer3.getSalary() << std::endl;
	std::cout << "Salary of " << developer4.toString(&developer4) << " equals " << developer4.getSalary() << std::endl;
	std::cout << "Salary of " << developer5.toString(&developer5) << " equals" << developer5.getSalary() << std::endl;
	

	std::cin.get();
	std::cin.get();
}
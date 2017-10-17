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
	Manager manager1("Ivan", "Ivanov", "123@mail.ru", 3000, 30);
	Manager manager2("Vasia", "Vasianovich", "321@mail.ru", 50, 30);

	TeamLeader teamleader1("q", "wqe", "adad@gmail.com", 150, 20);
	TeamLeader teamleader2("q2", "wqe", "adad2@gmail.com", 1500, 20);
	TeamLeader teamleader3("q3", "wqe", "adad2@gmail.com", 354, 20);

	Developer developer1("Vasian1", "Las", "kappa123", 1000, 10);
	Developer developer2("Vasian2", "Las", "kappa1234", 500, 10);
	Developer developer3("Vasian3", "Las", "kappa12345", 6500, 10);
	Developer developer4("Vasian4", "Las", "kappa123456", 900, 10);
	Developer developer5("Vasian5", "Las", "kappa1234567", 10, 10);

	developer1.setBoss(&teamleader1);
	developer2.setBoss(&teamleader1);
	developer3.setBoss(&teamleader2);
	developer4.setBoss(&teamleader2);
	developer5.setBoss(&teamleader3);

	teamleader1.setBoss(&manager1);
	teamleader2.setBoss(&manager1);
	teamleader3.setBoss(&manager2);

	std::cout <<"1: "<< teamleader1.getBoss() << std::endl;
	std::cout <<"2: "<< teamleader2.getBoss() << std::endl;
	std::cout <<"3: "<< teamleader3.getBoss() << std::endl;

	teamleader1.setBoss(&manager2);

	std::cout <<"4: "<< teamleader1.getBoss() << std::endl;


	

	std::cin.get();
	std::cin.get();
}
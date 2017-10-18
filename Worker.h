#ifndef WORKER_H
#define WORKER_H

#include "HR.h"
#include "Accounting.h"
#include <string>
#include <vector>
#include <iostream>

class Worker:
	public HR, public Accounting
{
private:
	std::string name;
	std::string lastname;
	std::string email;
	unsigned int hours;
	unsigned int multiplier;
	unsigned int currentSalary = 0;

public:
	std::string getName() override;
	std::string getLastname() override;
    std::string getEmail() override;
    unsigned int getHours() override;
	unsigned int getProfessionCoefficient() override;
	void setSalary() override;
	unsigned int getSalary() override;
	

	virtual Worker *getBossPointer() = 0;
	virtual std::string getBossName() = 0;
	virtual void setBoss(Worker*) = 0;
	virtual std::vector<Worker *> getSubordinates() = 0;
	virtual std::vector<Worker *> addSubordinates(Worker *) = 0;
	virtual std::vector<Worker *> delSubordinates(Worker *) = 0;

public:
	Worker(std::string, std::string, std::string,unsigned int,unsigned int);
	~Worker() = default;
	std::string toString(Worker *);
};


#endif
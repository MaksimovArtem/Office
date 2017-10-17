#ifndef WORKER_H
#define WORKER_H

#include "HR.h"
#include "Accounting.h"
#include <string>
#include <vector>

class Worker:
	public HR, public Accounting
{
	std::string name;
	std::string lastname;
	std::string email;
	unsigned int hours;
	unsigned int multiplier;
	unsigned int currentSalary = 0;

protected:
	
	std::string getName() override;
	std::string getLastname() override;
    std::string getEmail() override;
    unsigned int getHours() override;
	unsigned int getProfessionCoefficient() override;
	unsigned int setSalary() override;

	virtual Worker *getBoss();
	virtual void setBoss(Worker*);
	virtual std::vector<Worker *> getSubordinates();
	virtual std::vector<Worker *> addSubordinates(Worker *);
	virtual std::vector<Worker *> delSubordinates(Worker *);

public:
	Worker(std::string, std::string, std::string,unsigned int,unsigned int);
	~Worker() = default;
};

#endif
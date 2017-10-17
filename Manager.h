#ifndef MANAGER_H
#define MANAGER_H

#include "Worker.h"

class Manager :
	public Worker
{
private:
	std::vector<Worker *> mSubordinates;
public:
	std::vector<Worker *> getSubordinates() override;
	std::vector<Worker *> addSubordinates(Worker *) override;
	std::vector<Worker *> delSubordinates(Worker *) override;

	Manager(std::string, std::string, std::string, unsigned int, unsigned int);
	~Manager() = default;
};

#endif
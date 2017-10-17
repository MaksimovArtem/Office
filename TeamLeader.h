#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "Worker.h"
class Manager;


class TeamLeader :
	public Worker
{
private:
	Manager* boss;
	std::vector<Worker *> tSubordinates;
public:
	Worker *getBoss() override;
	void setBoss(Worker *) override;
	std::vector<Worker *> getSubordinates() override;
	std::vector<Worker *> addSubordinates(Worker *) override;
	std::vector<Worker *> delSubordinates(Worker *) override;

	TeamLeader(std::string, std::string, std::string, unsigned int, unsigned int);
	~TeamLeader() = default;
};

#endif

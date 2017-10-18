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
	Worker *getBossPointer() override;
	std::string getBossName() override;
	void setBoss(Worker *) override;

	std::vector<Worker *> getSubordinates() override;
	std::vector<Worker *> addSubordinates(Worker *) override;
	std::vector<Worker *> delSubordinates(Worker *) override;

public:
	TeamLeader(std::string, std::string, std::string, unsigned int, unsigned int);
	~TeamLeader() = default;
	std::string subordinatesToString();

};

#endif

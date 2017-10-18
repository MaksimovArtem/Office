#ifndef DEVELOPER_H
#define DEVELOPER_H

#include "Worker.h"
class TeamLeader;

class Developer :
	public Worker
{
private:
	TeamLeader *boss;
public:
	Worker *getBossPointer() override;
	std::string getBossName() override;
	void setBoss(Worker *) override;
	
	std::vector<Worker *> getSubordinates() override;
	std::vector<Worker *> addSubordinates(Worker *) override;
	std::vector<Worker *> delSubordinates(Worker *) override;

	Developer(std::string, std::string, std::string,unsigned int,unsigned int);
	~Developer() = default;
};

#endif


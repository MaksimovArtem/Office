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
	Worker *getBoss() override;
	void setBoss(Worker *) override;
	
	Developer(std::string, std::string, std::string,unsigned int,unsigned int);
	~Developer() = default;
};

#endif
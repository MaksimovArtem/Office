#ifndef HR_H
#define HR_H
#include <string>

class HR
{
public:
	virtual std::string getName() = 0;
	virtual std::string getLastname() = 0;
	virtual std::string getEmail() = 0;
};

#endif
#ifndef ACCOUNTING_H
#define ACCOUNTING_H

class Accounting
{
public:
	virtual unsigned int getHours() = 0;
	virtual unsigned int getProfessionCoefficient() = 0;
	virtual unsigned int getSalary() = 0;
	virtual void setHours(unsigned int &) = 0;
	virtual void setProfessionCoefficient(unsigned int &) = 0;
	virtual void setSalary() = 0;
	virtual void setSalary(unsigned int &) = 0;
};

#endif
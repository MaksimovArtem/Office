#ifndef ACCOUNTING_H
#define ACCOUNTING_H

class Accounting
{
public:
	virtual unsigned int getHours() = 0;
	virtual unsigned int getProfessionCoefficient() = 0;
	virtual unsigned int setSalary() = 0;
};

#endif
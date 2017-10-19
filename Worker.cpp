#include "Worker.h"
#include <iostream>


Worker::Worker(std::string name_,std::string lastname_, std::string email_,unsigned int hours_, unsigned int multiplier_) 
	: name(name_),lastname(lastname_),email(email_),hours(hours_),multiplier(multiplier_)
{

}

std::string Worker::getName()
{
	return name;
}

std::string Worker::getLastname()
{
	return lastname;
}

std::string Worker::getEmail()
{
	return email;
}

void Worker::setName(std::string &name_)
{
	name = name_;
}

void Worker::setLastname(std::string &lastname_)
{
	name = lastname_;
}

void Worker::setEmail(std::string &email_)
{
	name = email_;
}

unsigned int Worker::getHours()
{
	return hours;
}

unsigned int Worker::getProfessionCoefficient()
{
	return multiplier;
}

unsigned int Worker::getSalary()
{
	setSalary();
	return currentSalary;
}

void Worker::setHours(unsigned int &hours_)
{
	hours = hours_;
}

void Worker::setProfessionCoefficient(unsigned int &mult_)
{
	multiplier = mult_;
}

void Worker::setSalary()
{
	currentSalary = hours * multiplier;
}

void Worker::setSalary(unsigned int &salary_)
{
	currentSalary = salary_;
}

std::string Worker::toString()
{
	std::string result = getName() + ", " + getLastname() + ", " + getEmail();
	return result;
}

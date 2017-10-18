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

unsigned int Worker::getHours()
{
	return hours;
}

unsigned int Worker::getProfessionCoefficient()
{
	return multiplier;
}

void Worker::setSalary()
{
	currentSalary = hours * multiplier;
}

unsigned int Worker::getSalary()
{
	setSalary();
	return currentSalary;
}

std::string Worker::toString(Worker *worker)
{
	std::string result = worker->getName() + ", " + worker->getLastname() + ", " + worker->getEmail();
	return result;
}

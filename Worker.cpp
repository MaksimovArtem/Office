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

unsigned int Worker::setSalary()
{
	return (currentSalary = hours * multiplier);
}

Worker* Worker::getBoss()
{
	return nullptr;
}

void Worker::setBoss(Worker*)
{

}

std::vector<Worker *> Worker::getSubordinates()
{
	std::vector<Worker *> result;
	return result;
}

std::vector<Worker *> Worker::addSubordinates(Worker *)
{
	std::vector<Worker *> result;
	return result;
}

std::vector<Worker *> Worker::delSubordinates(Worker *)
{
	std::vector<Worker *> result;
	return result;
}

std::string Worker::toString(Worker *worker)
{
	std::string result = worker->getName() + ", " + worker->getLastname() + ", " + worker->getEmail();
	return result;
}
/*
std::ostream& operator<<(std::ostream& str, Worker* p) 
{
	return str << this->toString(p);
}*/
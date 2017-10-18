#include "Manager.h"

Manager::Manager(std::string mName, std::string mLastname, std::string mEmail, unsigned int mHours, unsigned int mMultiplier)
	: Worker(mName, mLastname, mEmail, mHours, mMultiplier)
{

}

Worker* Manager::getBossPointer()
{
	std::cout << "This worker has no boss" << std::endl;
	return nullptr;
}

std::string Manager::getBossName()
{
	std::cout << "This worker has no boss" << std::endl;
	std::string error = "This man is already a boss";
	return error;
}

void Manager::setBoss(Worker *worker)
{
	std::cout<< "This worker has no boss" << std::endl;
}

std::vector<Worker *> Manager::getSubordinates()
{
	std::cout << "Boss [" << this->toString(this) << "] has [" << subordinatesToString() << "] in workers list" << std::endl;
	return mSubordinates;
}

std::vector<Worker *> Manager::addSubordinates(Worker *worker)
{
	mSubordinates.push_back(worker);
	return mSubordinates;
}

std::vector<Worker *> Manager::delSubordinates(Worker *worker)
{
	std::vector<Worker *>::iterator it;

	for (it = mSubordinates.begin(); it != mSubordinates.end(); ++it)
	{
		if (*it == worker)
		{
			break;
		}
	}
	mSubordinates.erase(it);
	return mSubordinates;

}

std::string Manager::subordinatesToString()
{
	std::string result;

	for (auto &item : mSubordinates)
	{
		result += item->toString(item) + "; ";
	}
	return result;

}

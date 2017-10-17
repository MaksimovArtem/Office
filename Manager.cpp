#include "Manager.h"



Manager::Manager(std::string mName, std::string mLastname, std::string mEmail, unsigned int mHours, unsigned int mMultiplier)
	: Worker(mName, mLastname, mEmail, mHours, mMultiplier)
{

}

std::vector<Worker *> Manager::getSubordinates()
{
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



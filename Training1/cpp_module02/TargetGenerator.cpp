#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){};

TargetGenerator::~TargetGenerator()
{
	for (std::map<std::string, ATarget*>::iterator it = this->_targetGenerator.begin(); it != this->_targetGenerator.end(); ++it)
	{
		delete it->second;
	}
	this->_targetGenerator.clear();
}

std::map<std::string, ATarget*> TargetGenerator::getTargetGenerator() const
{
	return this->_targetGenerator;
}

TargetGenerator & TargetGenerator::operator=(const TargetGenerator & rhs)
{
	if (this != &rhs)
	{
		this->_targetGenerator = rhs.getTargetGenerator();
	}
	return *this;
}

TargetGenerator::TargetGenerator(const TargetGenerator & src)
{
	*this = src;
}

void TargetGenerator::learnTargetType(ATarget *target)
{
	if (this->_targetGenerator.count(target->getType()) == 0)
	{
		this->_targetGenerator[target->getType()] = target->clone();
	}
}

void TargetGenerator::forgetTargetType(std::string const & name)
{
	if (this->_targetGenerator.count(name) == 1)
	{
		delete this->_targetGenerator[name];
		this->_targetGenerator.erase(name);
	}
}

ATarget* TargetGenerator::createTarget(std::string const & name)
{
	ATarget *target = NULL;

	if (this->_targetGenerator.count(name) == 1)
	{
		target = this->_targetGenerator[name]->clone();
	}
	return target;
}
#include "TargetGenerator.hpp"

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

TargetGenerator::TargetGenerator() {};

TargetGenerator::~TargetGenerator()
{
	for (std::map<std::string, ATarget*>::iterator it = this->_targetGenerator.begin(); it != this->_targetGenerator.end(); ++it)
	{
		delete it->second;
	}
	this->_targetGenerator.clear();
}

void TargetGenerator::learnTargetType(ATarget* Target)
{
	if (this->_targetGenerator.count(Target->getType()) == 0)
	{
		this->_targetGenerator[Target->getType()] = Target->clone();
	}
}

void TargetGenerator::forgetTargetType(std::string const &type)
{
	if (this->_targetGenerator.count(type) == 1)
	{
		delete this->_targetGenerator[type];
		this->_targetGenerator.erase(type);
	}
}

ATarget* TargetGenerator::createTarget(std::string const &type)
{
	ATarget *target = NULL;
	if (this->_targetGenerator.count(type) == 1)
	{
		target = this->_targetGenerator[type]->clone();
	}
	return target;
}
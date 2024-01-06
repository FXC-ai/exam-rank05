#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator::~TargetGenerator()
{
	for (std::map<const std::string, const ATarget*>::iterator it = this->_targets.begin(); it != this->_targets.end(); ++it)
	{
		delete it->second;
	}
}

void TargetGenerator::learnTargetType(ATarget* target_to_learn)
{
	this->_targets[target_to_learn->getType()] = target_to_learn->clone();
}

ATarget* TargetGenerator::createTarget(std::string const & target_to_create)
{
	ATarget *result = NULL;
	if (this->_targets.count(target_to_create) == 1)
	{
		result = this->_targets[target_to_create]->clone();
	}
	return result;
}

std::map<const std::string, const ATarget*> TargetGenerator::getTargets() const
{
	return this->_targets;
};

void TargetGenerator::forgetTargetType(std::string const & target_to_forget)
{
	if (this->_targets.count(target_to_forget))
	{
		delete this->_targets[target_to_forget];
		this->_targets.erase(target_to_forget);
	}
};
#include "ASpell.hpp"

ASpell::ASpell(){}

ASpell::ASpell(const std::string & name, const std::string & effects) : _name(name), _effects(effects)
{
}

ASpell & ASpell::operator=(const ASpell & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_effects = rhs.getEffects();
	}
	return *this;
}

ASpell::ASpell(const ASpell & src)
{
	*this = src;
}

ASpell::~ASpell(){}

std::string ASpell::getName() const
{
	return this->_name;
}

std::string ASpell::getEffects() const
{
	return this->_effects;
}

void ASpell::launch(const ATarget *target) const
{
	target->getHitBySpell(*this);
}



#include "ATarget.hpp"

ATarget::ATarget(){}

ATarget::ATarget(const std::string & type) : _type(type)
{

}

ATarget & ATarget::operator=(const ATarget &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
	}
	return *this;
}

ATarget::ATarget(const ATarget &src)
{
	*this = src;
}

ATarget::~ATarget(){};

const std::string ATarget::getType() const
{
	return this->_type;
}

void ATarget::getHitBySpell(const ASpell & spell) const
{
	//(void) spell;

	//std::cout << "ATarget::getHitBySpell " << &spell << std::endl;
	std::cout << this->_type << " has been " << spell.getEffects() << "!" << std::endl;
	//std::cout << this->_type << " has been " << "!" << std::endl;
  	//std::cout << "ici" << std::endl;
}

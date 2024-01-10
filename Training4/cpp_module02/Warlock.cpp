#include "Warlock.hpp"

Warlock::Warlock(const std::string & name, const std::string & title) : _name(name), _title(title)
{
	std::cout << this->_name <<": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << this->_name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(){}

Warlock & Warlock::operator=(const Warlock & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_title = rhs.getTitle();
	}
	return *this;
}

Warlock::Warlock(const Warlock & src)
{
	*this = src;
}

const std::string & Warlock::getName() const
{
	return this->_name;
}
const std::string & Warlock::getTitle() const
{
	return this->_title;
}

void Warlock::setTitle(const std::string & title)
{
	this->_title = title;
}

void Warlock::introduce() const
{
	std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}


void Warlock::learnSpell(ASpell *spell)
{
	this->_spellBook.learnSpell(spell);
}

void Warlock::forgetSpell(const std::string name)
{
	this->_spellBook.forgetSpell(name);
}

void Warlock::launchSpell(std::string name, const ATarget & target)
{

	ASpell * spell = this->_spellBook.createSpell(name);

	if (spell != NULL)
	{
		target.getHitBySpell(*spell);
	}

}
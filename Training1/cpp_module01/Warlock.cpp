#include "Warlock.hpp"


Warlock::Warlock(const std::string & name, const std::string & title) : _name(name), _title(title)
{
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << this->_name << ": My job here is done!" << std::endl;
}

void Warlock::introduce() const
{
	std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}

const std::string & Warlock::getName() const
{
	return this->_name;
}

const std::string & Warlock::getTitle() const
{
	return this->_title;
}

void Warlock::setTitle (const std::string & title)
{
	this->_title = title;
}

Warlock::Warlock(){}

Warlock & Warlock::operator=(const Warlock &rhs)
{

	if (&rhs != this)
	{
		this->_title = rhs.getTitle();
	}
	return *this;
}

Warlock::Warlock(const Warlock & src)
{
	*this = src;
}

void Warlock::learnSpell(ASpell *spell)
{
	if (this->_spellBook.count(spell->getName()) == 0)
	{
		this->_spellBook[spell->getName()] = spell->clone();
	}
}

void Warlock::forgetSpell(std::string name)
{
	if (this->_spellBook.count(name) == 1)
	{
		delete this->_spellBook[name];
		this->_spellBook.erase(name);
	}
}

void Warlock::launchSpell(const std::string name, const ATarget & target)
{
	if (this->_spellBook.count(name) == 1)
	{


		this->_spellBook[name]->launch(&target);
		
		//target.getHitBySpell(*(this->_spellBook[name]));
	}
}

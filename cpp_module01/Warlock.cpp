#include "Warlock.hpp"

Warlock::Warlock(){};

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

Warlock::Warlock(const std::string & name, const std::string & title) : _name(name), _title(title)
{
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	for (std::map<std::string, ASpell*>::iterator it = this->_spellBook.begin(); it != this->_spellBook.end(); ++it)
	{
		delete it->second;
	}
	this->_spellBook.clear();

	std::cout << this->_name << ": My job here is done!" << std::endl;
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
	this->_spellBook[spell->getName()] = spell->clone();
}

void Warlock::forgetSpell(const std::string name)
{
	if (this->_spellBook.count(name) == 1)
	{
		delete this->_spellBook[name];
		this->_spellBook.erase(name);
	}
}

void Warlock::launchSpell(std::string name, const ATarget & target)
{
	if (this->_spellBook.count(name) == 1)
	{
		target.getHitBySpell(*this->_spellBook[name]);
	}
}

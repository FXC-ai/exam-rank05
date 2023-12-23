#include "Warlock.hpp"

Warlock::Warlock(){}

Warlock::Warlock(const Warlock &src)
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

Warlock & Warlock::operator=(const Warlock &rhs)
{
	if (this != &rhs)
	{
		this->_title = rhs.getTitle();
		// this->_name = rhs.getSpell
	}
	return *this;
}

Warlock::Warlock(const std::string &name, const std::string &title) : _name(name), _title(title)
{
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << this->_name << ": My job here is done!" << std::endl;
}

void Warlock::setTitle (const std::string & title)
{
	this->_title = title;
}

void Warlock::introduce() const
{
	std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" <<std::endl;
}

void Warlock::learnSpell(ASpell* spell_to_learn)
{
	this->_spells[spell_to_learn->getName()] = spell_to_learn;
}

void Warlock::launchSpell(const std::string spell_name, const ATarget & target)
{
	if (this->_spells.count(spell_name) == 1)
	{
		this->_spells[spell_name]->launch(target);
		//target.getHitBySpell(this->_spells[spell_name]);
	}
}

void Warlock::forgetSpell(std::string spell_to_forget)
{
	this->_spells.erase(spell_to_forget);
}


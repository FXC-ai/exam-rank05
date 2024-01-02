#include "SpellBook.hpp"

SpellBook::SpellBook(){}

SpellBook::~SpellBook()
{
	for (std::map<const std::string, const ASpell*>::iterator it = this->_spells.begin(); it != this->_spells.end(); ++it)
	{
		delete it->second;
	}
}

void SpellBook::learnSpell(ASpell* spell_to_learn)
{
	this->_spells[spell_to_learn->getName()] = spell_to_learn->clone();
}

ASpell* SpellBook::createSpell(std::string const & spell_to_create)
{
	ASpell *result = NULL;
	if (this->_spells.count(spell_to_create) == 1)
	{
		result = this->_spells[spell_to_create]->clone();
	}
	return result;
}

std::map<const std::string, const ASpell*> SpellBook::getSpells() const
{
	return this->_spells;
};

void SpellBook::forgetSpell(std::string const & spell_to_forget)
{
	if (this->_spells.count(spell_to_forget))
	{
		delete this->_spells[spell_to_forget];
		this->_spells.erase(spell_to_forget);
	}

};
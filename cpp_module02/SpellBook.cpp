#include "SpellBook.hpp"

SpellBook & SpellBook::operator=(const SpellBook & rhs)
{
	if (this != &rhs)
	{
		this->_spellBook = rhs.getSpellBook();
	}
	return *this;
}

SpellBook::SpellBook(const SpellBook & rhs)
{
	*this = rhs;
}

SpellBook::SpellBook()
{

}

SpellBook::~SpellBook()
{
	for (std::map<std::string, ASpell*>::iterator it = this->_spellBook.begin(); it != this->_spellBook.end(); ++it)
	{
		delete it->second;
	}
	this->_spellBook.clear();
}

void SpellBook::learnSpell(ASpell *spell)
{
	this->_spellBook[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(std::string const &name)
{
	if (this->_spellBook.count(name) == 1)
	{
		delete this->_spellBook[name];
		this->_spellBook.erase(name);
	}
}

ASpell* SpellBook::createSpell(std::string const & name)
{
	ASpell *spell = NULL;
	if (this->_spellBook.count(name) == 1)
	{
		spell = this->_spellBook[name]->clone();
		//std::cout << "SpellBook::createSpell " << spell->getName() << " " << spell <<std::endl;
	}
	return spell;
}

std::map<std::string , ASpell *> SpellBook::getSpellBook() const
{
	return this->_spellBook;
}

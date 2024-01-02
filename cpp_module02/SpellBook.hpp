#ifndef SPELL_BOOK_HPP
#define SPELL_BOOK_HPP

#include "ASpell.hpp"
#include <map>

class SpellBook
{
	public :
		SpellBook();
		~SpellBook();
		void learnSpell(ASpell* spell_to_learn);
		ASpell* createSpell(std::string const &spell_to_create);

		void forgetSpell(std::string const & spell_to_forget);

		std::map<const std::string, const ASpell*> getSpells() const;

	private :
		SpellBook(const SpellBook & src);
		SpellBook & operator=(const SpellBook & rhs);

		std::map<const std::string, const ASpell*> _spells;
};

#endif
#ifndef SPELL_BOOK_HPP
#define SPELL_BOOK_HPP

#include "ASpell.hpp"
#include <map>

/*

Now, make a SpellBook class, in canonical form, that can't be copied or instantiated
by copy. It will have the following functions:

* void learnSpell(ASpell*), that COPIES a spell in the book
* void forgetSpell(string const &), that deletes a spell from the book, except
  if it isn't there
* ASpell* createSpell(string const &), that receives a string corresponding to
  the name of a spell, creates it, and returns it.

*/

class SpellBook
{
	public :
		SpellBook();
		~SpellBook();
		void learnSpell(ASpell* spell_to_learn);
		ASpell* createSpell(std::string const &spell_to_create);

		void forgetSpell(std::string const & spell_to_forget);

		std::map<const std::string, const ASpell*> getSpells();

	private :
		SpellBook(const SpellBook & src);
		SpellBook & operator=(const SpellBook & rhs);

		std::map<const std::string, const ASpell*> _spells;
};

#endif
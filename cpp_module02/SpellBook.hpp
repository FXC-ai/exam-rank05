#ifndef SPE_HPP
#define SPE_HPP

#include <map>
#include "ASpell.hpp"

class SpellBook
{
	private :
		SpellBook & operator=(const SpellBook & rhs);
		SpellBook(const SpellBook & rhs);

		std::map<std::string , ASpell *> _spellBook;

	public :
		SpellBook();
		~SpellBook();
		void learnSpell(ASpell *spell);
		void forgetSpell(std::string const &name);
		ASpell* createSpell(std::string const & name);

		std::map<std::string , ASpell *> getSpellBook() const;


};


#endif
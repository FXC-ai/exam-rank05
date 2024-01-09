#ifndef SB_HPP
#define SB_HPP

#include <map>
#include "ASpell.hpp"

class SpellBook
{

	private :
		SpellBook & operator=(const SpellBook & rhs);
		SpellBook(const SpellBook & src);

		std::map<std::string, ASpell*> _spellBook;

	public:
		SpellBook();
		~SpellBook();

		std::map<std::string, ASpell*> getSpellBook() const;


		void learnSpell(ASpell* spell);
		void forgetSpell(std::string const &name);
		ASpell* createSpell(std::string const &name);

};

#endif
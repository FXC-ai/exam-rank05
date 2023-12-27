#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "SpellBook.hpp"

class Warlock
{
	private :
		const std::string _name;
		std::string _title;
		Warlock();
		Warlock & operator=(const Warlock &rhs);
		Warlock(const Warlock &src);
		std::map<const std::string, const ASpell*> _spells;
		// SpellBook _spellBook;

	public :
		Warlock(const std::string &name, const std::string &title);
		~Warlock();
		const std::string & getName() const;
		const std::string & getTitle() const;
		
		void setTitle (const std::string & title);
		void introduce() const;

		void learnSpell(ASpell* spell_to_learn);
		void forgetSpell(std::string spell_to_forget);
		void launchSpell(const std::string spell_name, const ATarget & target);


};

#endif
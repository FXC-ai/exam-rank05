#ifndef WARLOCK
#define WARLOCK

#include <iostream>
#include <map>

#include "ASpell.hpp"
#include "ATarget.hpp"


class Warlock
{
	private :
		const std::string _name;
		std::string _title;
		Warlock();
		Warlock & operator=(const Warlock & rhs);
		Warlock(const Warlock & src);

		std::map<const std::string, const ASpell*> _spellBook;

	public :
		Warlock(const std::string & name, const std::string & title);
		~Warlock();

		const std::string & getName() const;
		const std::string & getTitle() const;

		void setTitle (const std::string & title);

		void introduce() const;

		void learnSpell(ASpell *spell);
		void forgetSpell(std::string name);
		void launchSpell(const std::string name, const ATarget & target);

};



#endif
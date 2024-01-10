#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <map>
#include "SpellBook.hpp"

class Warlock
{
	private :
		std::string _name;
		std::string _title;
		SpellBook _spellBook;

		Warlock();
		Warlock &operator=(const Warlock & rhs);
		Warlock(const Warlock & src);
		

	public :
		Warlock(const std::string & name,const std::string & title);
		~Warlock();
		const std::string & getName() const;
		const std::string & getTitle() const;

		void setTitle(const std::string & title);
		
		void introduce() const;
		
		void learnSpell(ASpell *spell); 
		void forgetSpell(const std::string name); 
		void launchSpell(std::string name, const ATarget & target); 


};

#endif
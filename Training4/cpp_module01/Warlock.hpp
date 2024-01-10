#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <map>
#include "ASpell.hpp"

class Warlock
{
	public :
		Warlock(const std::string & name,const std::string & title);
		~Warlock();
		const std::string & getName() const;
		const std::string & getTitle() const;

		void setTitle(const std::string & title);
		
		void introduce() const;
		



	private :
		std::string _name;
		std::string _title;
		Warlock();
		Warlock &operator=(const Warlock & rhs);
		Warlock(const Warlock & src);

		std::map<std::string, ASpell*> _spellBook;

		void learnSpell(ASpell *spell); 
		void forgetSpell(const std::string name); 
		void launchSpell(std::string name, const ATarget & target); 


};

#endif
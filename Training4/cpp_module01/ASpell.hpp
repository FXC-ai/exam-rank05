#ifndef ASP_HPP
#define ASP_HPP

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{

	protected :
		std::string _name;
		std::string _effects;

	public :
		ASpell();
		ASpell & operator=(const ASpell & rhs);
		ASpell(const ASpell & src);

		virtual ~ASpell();
		
		ASpell(const std::string name, const std::string effects);

		std::string getName() const;
		std::string getEffects() const;

		virtual ASpell* clone() const = 0;

		void launch(const ATarget & target) const;


};

#endif
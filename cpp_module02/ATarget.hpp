#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	protected :
		std::string _type;

	public :
		ATarget();
		ATarget(const std::string & type);
		ATarget & operator=(const ATarget & rhs);
		ATarget(const ATarget & src);
		virtual ~ATarget();

		const std::string & getType() const;

		void getHitBySpell(const ASpell & spell) const;

		virtual ATarget *clone() const = 0;
};


#endif
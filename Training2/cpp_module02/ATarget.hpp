#ifndef AT_HPP
#define AT_HPP

#include <iostream>

#include "ASpell.hpp"

class ASpell;

class ATarget
{
	protected :
		std::string _type;

	public :
		ATarget();
		ATarget & operator=(const ATarget & rhs);
		ATarget(const ATarget & src);
		ATarget(const std::string type);
		virtual ~ATarget();

		const std::string & getType() const;
		virtual ATarget *clone() const = 0;


		void getHitBySpell (const ASpell & spell) const;
};

#endif
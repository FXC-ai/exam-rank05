#ifndef ATA_HPP
#define ATA_HPP

#include "ASpell.hpp"
#include <iostream>

class ASpell;

class ATarget
{
	protected:
		std::string _type;

	public:
		ATarget();
		ATarget(const std::string & type);
		ATarget & operator=(const ATarget &rhs);
		ATarget(const ATarget &src);
		virtual ~ATarget();

		const std::string getType() const;
		
		virtual ATarget *clone() const = 0;

		void getHitBySpell(const ASpell & spell) const;
};


#endif
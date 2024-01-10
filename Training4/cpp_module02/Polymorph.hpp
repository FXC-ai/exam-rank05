#ifndef PL_HPP
#define PL_HPP

#include "ASpell.hpp"
class Polymorph : public ASpell
{
	public :

		Polymorph();
		~Polymorph();
		Polymorph * clone() const;
};

#endif
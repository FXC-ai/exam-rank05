#ifndef FIR_HPP
#define FIR_HPP

#include "ASpell.hpp"

class Fireball : public ASpell
{
	public :
		Fireball();
		~Fireball();
		virtual Fireball * clone() const;
};

#endif
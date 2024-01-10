#ifndef FR_HPP
#define FR_HPP

#include "ASpell.hpp"
class Fireball : public ASpell
{
	public :
		Fireball();
		~Fireball();
		Fireball * clone() const;
};

#endif
#ifndef FB_HPP
#define FB_HPP

#include "ASpell.hpp"

class Fireball : public ASpell
{
	public :
		Fireball();
		~Fireball();
		virtual Fireball* clone() const;

};

#endif
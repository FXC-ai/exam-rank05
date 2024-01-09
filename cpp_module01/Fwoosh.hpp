#ifndef FWO_HPP
#define FWO_HPP

#include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public :
		Fwoosh();
		~Fwoosh();
		virtual Fwoosh * clone() const;
};

#endif
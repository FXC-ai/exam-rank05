#ifndef Polymorph_HPP
#define Polymorph_HPP

#include "ASpell.hpp"

class Polymorph : public ASpell
{
	public :
		Polymorph ();
		virtual Polymorph* clone() const;
};

#endif
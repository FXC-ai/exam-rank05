#ifndef FW_HPP
#define FW_HPP


#include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public :
		Fwoosh();
		~Fwoosh();
		virtual Fwoosh* clone() const;
};

#endif
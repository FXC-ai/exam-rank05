#ifndef FW_HPP
#define FW_HPP


#include "ASpell.hpp"


class Fwoosh : public ASpell
{
	Fwoosh();
	~Fwoosh();

	Fwoosh * clone() const;
};


#endif
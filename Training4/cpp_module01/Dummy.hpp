#ifndef DUM_HPP
#define DUM_HPP

#include "ATarget.hpp"

class Dummy : public ATarget
{

	Dummy();
	~Dummy();

	Dummy* clone () const;

};


#endif
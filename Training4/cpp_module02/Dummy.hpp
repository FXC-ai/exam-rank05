#ifndef DUM_HPP
#define DUM_HPP

#include "ATarget.hpp"

class Dummy : public ATarget
{
	public :

		Dummy();
		~Dummy();

		Dummy* clone () const;

};


#endif
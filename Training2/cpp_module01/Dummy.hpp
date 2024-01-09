#ifndef DU_HPP
#define DU_HPP

#include "ATarget.hpp"

class Dummy : public ATarget
{
	public :
		Dummy();
		~Dummy();
		virtual Dummy* clone() const;
};


#endif
#ifndef BRI_HPP
#define BRI_HPP

#include "ATarget.hpp"

class BrickWall : public ATarget
{
	public :
		BrickWall();
		~BrickWall();

		BrickWall* clone () const;

};


#endif
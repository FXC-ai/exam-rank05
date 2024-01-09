#ifndef BW_HPP
#define BW_HPP

#include "ATarget.hpp"

class BrickWall : public ATarget
{

	public :
		BrickWall();
		virtual ~BrickWall();
		virtual BrickWall* clone() const;

};

#endif
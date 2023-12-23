#include "Fwoosh.hpp"

Fwoosh::Fwoosh ()
{
	this->_name = "Fwoosh";
	this->_effects = "fwooshed";
}

Fwoosh *Fwoosh::clone() const
{
	return new Fwoosh();
}
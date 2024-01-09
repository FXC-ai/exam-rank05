#include "Dummy.hpp"

Dummy::Dummy()
{
	this->_type = "Inconspicuous Red-brick Wall";
}

Dummy::~Dummy(){};

Dummy * Dummy::clone() const
{
	return new Dummy();
}
#include "Dummy.hpp"

Dummy::Dummy()
{
	this->_type = "Target Practice Dummy";
}

Dummy::~Dummy(){}

Dummy * Dummy::clone() const
{
	return new Dummy();
}
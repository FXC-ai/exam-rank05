#include "Fireball.hpp"

Fireball::Fireball()
{
	this->_name = "Fireball";
	this->_effects = "burnt to a crisp";
}

Fireball::~Fireball(){}

Fireball * Fireball::clone() const
{
	return new Fireball();
}
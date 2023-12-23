#ifndef ATARGET_HPP
#define ATARGET_HPP
#include <iostream>

class ASpell;

class ATarget
{
	protected :
		std::string _type;

	public :
		ATarget();
		ATarget(const std::string &type);
		ATarget(const ATarget &src);
		ATarget &operator=(const ATarget &rhs);
		virtual ~ATarget();

		const std::string & getType() const;

		virtual ATarget *clone() const = 0;

		void getHitBySpell(const ASpell & spell) const;

};

#endif
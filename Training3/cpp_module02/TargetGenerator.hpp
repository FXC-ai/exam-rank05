#ifndef TG_HPP
#define TG_HPP

#include <map>
#include "ATarget.hpp"

class TargetGenerator
{

	private :
		std::map<std::string, ATarget*> _targetGenerator;

		TargetGenerator & operator=(const TargetGenerator & rhs);
		TargetGenerator(const TargetGenerator & src);


	public :
		TargetGenerator();
		~TargetGenerator();

		std::map<std::string, ATarget*> getTargetGenerator() const;

		void learnTargetType(ATarget* target);
		void forgetTargetType(std::string const & name);
		ATarget* createTarget(std::string const & name);
};

#endif
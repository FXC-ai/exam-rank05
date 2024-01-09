#ifndef TG_HPP
#define TG_HPP

#include <map>
#include "ATarget.hpp"

class TargetGenerator
{
	private :
		TargetGenerator & operator=(const TargetGenerator & rhs);
		TargetGenerator(const TargetGenerator & src);

		std::map<std::string, ATarget*> _targetGenerator;

	public:
		TargetGenerator();
		~TargetGenerator();

		std::map<std::string, ATarget*> getTargetGenerator() const;

		void learnTargetType(ATarget* target);
		void forgetTargetType(std::string const &type);
		ATarget* createTarget(std::string const &type);

};

#endif
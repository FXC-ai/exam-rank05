#ifndef TAG_HPP
#define TAG_HPP

#include <map>
#include "ATarget.hpp"

class TargetGenerator
{
	private :
		TargetGenerator & operator=(const TargetGenerator & rhs);
		TargetGenerator(const TargetGenerator & rhs);

		std::map<std::string , ATarget *> _targetGenerator;

	public :
		TargetGenerator();
		~TargetGenerator();
		void learnTargetType(ATarget *target);
		void forgetTargetType(std::string const & name);
		ATarget* createTarget(std::string const & name);

		std::map<std::string , ATarget *> getTargetGenerator() const;


};


#endif
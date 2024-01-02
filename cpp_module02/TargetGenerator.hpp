#ifndef TARGET_GENERATOR_HPP
#define TARGET_GENERATOR_HPP

#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
	public :
		TargetGenerator();
		~TargetGenerator();
		void learnTarget(ATarget* Target_to_learn);
		ATarget* createTarget(std::string const &Target_to_create);

		void forgetTarget(std::string const & Target_to_forget);

		std::map<const std::string, const ATarget*> getTargets() const;

	private :
		TargetGenerator(const TargetGenerator & src);
		TargetGenerator & operator=(const TargetGenerator & rhs);

		std::map<const std::string, const ATarget*> _Targets;
};

#endif
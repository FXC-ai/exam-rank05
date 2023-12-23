#define MAGENTA "\033[1;95m"
#define RED "\033[1;91m"
#define GREEN "\033[1;92m"
#define BLUE "\033[1;94m"
#define YELLOW "\033[1;93m"
#define CYAN "\033[1;96m"
#define RESET "\033[0m"


#include "Warlock.hpp"
//#include "ATarget.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"

int main ()
{

	{
		Dummy dummy = Dummy();
		const Dummy dummy_const = Dummy();
		Dummy *dummy_clone = dummy_const.clone();

		Fwoosh* fwoosh_new = new Fwoosh;
		const Fwoosh* fwoosh_new_const = new Fwoosh;
		const Fwoosh fwoosh_const = Fwoosh();

		std::cout << BLUE << "Dummys check" << RESET << std::endl;
		std::cout << dummy.getType() << std::endl;
		std::cout << dummy_clone->getType() << std::endl;
		
		std::cout << BLUE << "Fwoosh check" << RESET << std::endl;
		std::cout << fwoosh_new->getName() << std::endl;
		std::cout << fwoosh_new->getEffects() << std::endl;
		std::cout << fwoosh_const.getEffects() << std::endl;

		fwoosh_const.launch(dummy);
		dummy_clone->getHitBySpell(fwoosh_const);

		delete dummy_clone;
		delete fwoosh_new;
		delete fwoosh_new_const;
	}
	{
		std::cout << BLUE << "Warlock check" << RESET << std::endl;

		Warlock richard("Richard", "the Titled");

		Dummy bob;
		Fwoosh* fwoosh = new Fwoosh();

		richard.learnSpell(fwoosh);

		richard.introduce();

		richard.launchSpell("Fwoosh", bob);

		richard.forgetSpell("Fwoosh");
		richard.launchSpell("Fwoosh", bob);



		delete fwoosh;

	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
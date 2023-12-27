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
#include "Polymorph.hpp"
#include "Fireball.hpp"
#include "BrickWall.hpp"
#include "SpellBook.hpp"

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
		std::cout << BLUE << "Polymorph check" << RESET << std::endl;
		Polymorph *poly0 = new Polymorph;
		const Polymorph *poly1 = poly0->clone();

		std::cout << poly1->getName() << std::endl;

		delete poly0;
		delete poly1;
	}
	{
		std::cout << BLUE << "Fireball check" << RESET << std::endl;

		Fireball fire0 = Fireball();
		Fireball *fire1 = fire0.clone();


		std::cout << fire1->getName() << std::endl;

		delete fire1;
	}
	{
		std::cout << BLUE << "BrickWall check" << RESET << std::endl;

		BrickWall brick0 = BrickWall();
		const BrickWall *brick1 = brick0.clone();

		std::cout << brick1->getType() << std::endl;

		delete brick1;
	}
	{

		std::cout << BLUE << "SpellBook check" << RESET << std::endl;

		SpellBook *spellBook0 = new SpellBook;

		Fireball spellFire;

		Polymorph spellPolymo;

		BrickWall brick;


		std::cout << spellFire.getName() << std::endl;
		std::cout << spellFire.getEffects() << std::endl;

		spellBook0->learnSpell(&spellFire);
		spellBook0->learnSpell(&spellPolymo);

		spellBook0->getSpells()["Fireball"]->launch(brick);

		// spellBook0->forgetSpell("Fireball");

		ASpell *poly = spellBook0->createSpell("Polymorph");


		std::cout << poly->getEffects() << std::endl;

		poly->launch(brick);

		spellBook0->forgetSpell(poly->getName());



		// ASpell *poly2 = spellBook0->createSpell("Polymorph");

		// std::cout << poly2->getName() << std::endl;
		

		delete poly;
		delete spellBook0;
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
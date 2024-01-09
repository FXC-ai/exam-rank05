#include "Warlock.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"

class Useless
{
  public:
    Useless(){};
    void Parle() const
    {std::cout << "Je parle" << std::endl;};
    ~Useless(){};
};


int main()
{
  {
    Warlock const richard("Richard", "Mistress of Magma");
    richard.introduce();
    std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

    Warlock* jack = new Warlock("Jack", "the Long");
    jack->introduce();
    jack->setTitle("the Mighty");
    jack->introduce();

    delete jack;
  }

  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;

  {
    Warlock richard("Richard", "the Titled");

    Dummy bob;
    Fwoosh* fwoosh = new Fwoosh();

    richard.learnSpell(fwoosh);

    richard.introduce();
    richard.launchSpell("Fwoosh", bob);

    richard.forgetSpell("Fwoosh");
    richard.launchSpell("Fwoosh", bob);
  }


  {
    Useless* useless0 = new Useless();
    std::map <const std::string, const Useless*> test;

    test["VTFEP"] = useless0;

    test["VTFEP"]->Parle();

  }
  


  return (0);
}
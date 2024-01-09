#ifndef WAR_HPP
#define WAR_HPP


#include <iostream>

class Warlock
{

	private :
		std::string _name;
		std::string _title;
		Warlock();
		Warlock & operator=(const Warlock & rhs);
		Warlock(const Warlock & src);


	public :
		Warlock(const std::string & name, const std::string & title);
		~Warlock();

		const std::string & getName() const;
		const std::string & getTitle() const;

		void setTitle(const std::string & title);

		void introduce() const;


};



#endif
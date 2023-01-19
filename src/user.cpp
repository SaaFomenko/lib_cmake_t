#include <iostream>
#include <string>
#include <user/user.h>


namespace mylib {

	User::User(std::string name) : 
		name_(name)
	{}

	User::~User(){}

	const std::string User::getName()
	{
		return name_;
	}

} // namespace mylib

/*
void user_dialog(const std::string &request, Greeter &obj)
{
	std::string name = "";

	std::cout << request;
	std::getline(std::cin, name);

	const std::string msg = obj.greet(name);

	std::cout << msg << std::endl;
}
*/

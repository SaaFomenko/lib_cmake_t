#ifndef USER_CLASS_H
#define USER_CLASS_H


namespace mylib {

class User
{
	std::string name_;

	public:
	User(std::string);
	virtual ~User();

	const std::string getName();
};

} // namespace mylib

#endif

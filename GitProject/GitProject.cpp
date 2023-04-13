// DZ 7 №4

#include <iostream>
#include <string>
int main()
{
	std::string flname;
	std::string fname, lname;
	std::cout << "Enter your name: ";
	std::getline(std::cin, flname);
	std::string temp = flname;
	int pos = temp.find(" ");
	fname = temp.erase(pos);
	lname = flname.erase(0, pos);

	std::cout << "first name is " << fname << std::endl;
	std::cout << "last name is " << lname << std::endl;

}
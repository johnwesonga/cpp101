#include <iostream>
#include <string>

int main(){
	char myname[5] = {'j','o','h','n'};
	char name[] = "john";
	std::cout << "My name is " << name << '\n';
	std::cout << "My name is " << myname << '\n';

	//now using string namespace
	std::string s1 ("john wesonga");
	std::cout << "My fullname is " << s1 << '\n';

	// more
	string s2 = "john nyukuri";
	return 0;


}
#include <iostream>

struct Employee {
	const char* name;

};

void print_empl(const Employee* e){
	std::cout << e->name << '\n';
}

int main(){
	Employee emp_one = {"John Wesonga"};
	Employee * p_emp_one;
	p_emp_one = &emp_one;
	std::cout << "My name is " << emp_one.name << '\n';
	std::cout << "p_emp_one name is " << p_emp_one->name << '\n';
	print_empl(p_emp_one);

	return 0;
}
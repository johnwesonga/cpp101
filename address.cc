#include <iostream>
using namespace std;

void foo(int i){
	i = 10;
}

void bar(int* i){
	*i= 100;
}

int main()
{
int donuts = 6;
double cups = 4.5;
cout << "donuts value = " << donuts;
cout << " and donuts address = " << &donuts << '\n';
// NOTE: you may need to use unsigned (&donuts)
// and unsigned (&cups)
cout << "cups value = " << cups;
cout << " and cups address = " << &cups << '\n';
foo(donuts);
cout << "donuts value = " << donuts << '\n';
bar(&donuts);
cout << "donuts value = " << donuts << '\n';

return 0;
}
#include <iostream>
using namespace std;

enum Color {
	red, blue, green};

// C++11 enum class
enum class Errors{
	MISSING,
	NOTFOUND
};

string color_code(int i){
	string color_val;
	switch(i)
	{
		case red:
		color_val = "red";
		break;

		case blue:
		color_val = "blue";
		break;
	}
	return color_val;
}
int main(){
	

	Color favoriteColor = red;
	cout << "My favorite color is " << color_code(favoriteColor) << '\n';
	Errors myError = Errors::MISSING;
	return 0;
}

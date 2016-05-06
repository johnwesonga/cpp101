#include <iostream>
#include "rectangle.h"

void Rectangle::set_values (int x, int y) {
	  width = x;
	    height = y;
}

int main(){
	Rectangle rect;
	  rect.set_values (3,4);
	  std::cout << "area: " << rect.area() << "\n";
	  return 0;
}

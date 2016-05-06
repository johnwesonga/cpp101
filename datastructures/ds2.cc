#include <iostream>
#include <array>

struct Point {
	int x, y;
};

struct Array {
	Point elem[3];
};

int main(){
	Point points[3] = {{1,2}, {3,4}, {5,6}};
	int x2 = points[2].x;
	std::cout << "x2 = " << x2 << '\n';

	std::array<int, 3> a1{ {1, 2, 3} };
	using Array = std::array<Point, 3>;
	Array p1 {{1,2}, {3,4}, {5,6}}; 
	//std::array<Point, 3> p1 {{1,2}, {3,4}, {5,6}};


	return 0;
}

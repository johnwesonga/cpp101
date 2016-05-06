#include <iostream>
using namespace std;

class Vector{
public:
	Vector(int s) :elem{new double[s]}, sz{s} {} // c++11 member initialization 
	 //Vector(int s){ elem = new double[s]; sz = s;}
	double& operator[](int i){
		return elem[i];
	}
	int size(){
		return sz;
	}
private:
	double* elem;
	int sz;
};

int main(){
	Vector v(10);
	v[0] = 10;
	cout << "vector size " << v.size() << '\n';
	cout << "item at position 0 =" << v[0] << '\n';
	return 0;
}
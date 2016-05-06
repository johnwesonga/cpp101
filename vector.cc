#include <iostream>
using namespace std;

struct Vector
{
	
	int sz; // number of elements
	double* elem; // pointer to elements
};

void vector_init(Vector& v, int e){
	v.elem = new double[e];
	v.sz = e;
}

double read_and_sum(int s)
{
	Vector v;
	vector_init(v, s);
	for (int i=0; i < s;++i){
		cin >>v.elem[i];
	}

	double sum = 0;

	for (int i=0; i<s;++i){
		sum+=v.elem[i];
	}

	return sum;
}

int main(){
	double rs = read_and_sum(10);
	printf("the read and sum %f", rs);
	return 0;
}
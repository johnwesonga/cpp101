template<typename T>
class Vector {
private:
	T* elem;
	int sz;
public:
	Vector(int s);
	~Vector() { delete[] elem;}

	// copy constructor
	Vector(const Vector& a);

	// copy assignment
	Vector& operator=(const Vector& a);

	// move constructor
	Vector(Vector&& a);

	//move assignment
	Vector& operator=(Vector&& a);

	T& operator[] (int i);
};


//
#ifndef MY_VECTOR_H
#define MY_VECTOR_H

class Vector {
public:
	Vector(size_t sz);
	Vector(const Vector& v); //copuy constructor
	Vector& operator= (const Vector &v);
	Vector(Vector&& v);
	Vector& operator=(Vector&& v); //move assignement
	size_t Size() const { return size; }
	int& operator[](int i) { return nums[i]; } //assign value
	int& operator[](int i) const { return nums[i]; } //get value
	~Vector(); //destructor
	
private: 
	size_t size;
	int* nums;
};


#endif
void use_vector();
Vector get_vector();

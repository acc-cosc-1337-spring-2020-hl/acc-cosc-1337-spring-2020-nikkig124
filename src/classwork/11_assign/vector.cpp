#include "vector.h"

//allocate dynamic memory for array of size
//initalized all array elemenrts to 0
Vector::Vector(size_t sz)
	:size{ sz }, nums{ new int[sz] }
{
	for (size_t i = 0; i < sz; ++i)
	{
		nums[i] = 0;
	}
}

//COPY CONSTRUCT
//set ner class size to teh original array size
//allocated a dynamic memory array of size elements
//initalized all elements to value of original class
Vector::Vector(const Vector & v) 
	: size{v.size}, nums{new int[v.size]}
{
	for (size_t i = 0; i < size ++i)
	{
		nums[i] = v[i];
	}
}


Vector & Vector::operator=(const Vector & v)
{
	int* temp = new int[v.size];
	for (size_t i = 0; i < v.size; ++i)
	{
		temp[i] = v[i];
	}
	delete[]nums;
	nums = temp;
	size = v.size;

	return *this;	
}
//use move source pointer
//point move source pointer to nothing
Vector::Vector(Vector && v) 
	: size{ v.size }, nums{ v.nums }
{
	v.size = 0;
	v.nums = nullptr;
}

Vector & Vector::operator=(Vector && v)
{
	//dont create memory
	delete nums;
	nums = v.nums;
	size = v.size;
	//changing pointers to help code run faster
	v.nums = nullptr;
	v.size = 0;
	return *this;
}

Vector::~Vector()
{
	std::cout << "release memory";
	delete[] nums;
}

//void use_vector()
//{
//	Vector v(3);
//}

void use_vector()
{
	Vector *v = new Vector(3);  // does not call the destructor.
	// If you allocate dynamic memory, you should release the moemery manually.

}

Vector get_vector()
{
	Vector v = Vector(3);
	return v;
}



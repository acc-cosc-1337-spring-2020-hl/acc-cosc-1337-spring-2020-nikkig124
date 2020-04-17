int main() 
{
	int* ptr_num = new int(5);

	delete ptr_num;
	ptr_num = nullptr;

	return 0;
}
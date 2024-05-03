#include <iostream>

template<typename T, int N>
class Array
{
public: 
	int GetSize() const { return N; }
private:
	T m_Array[N];
};

int main()
{
	Array<std::string, 5> array;
	std::cout << "Array = " << array.GetSize() << std::endl;

	std::cin.get();
};

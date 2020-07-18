#include <iostream>

using namespace std;

// templates allow us to do generic programming.
// Generic Programming which can be seen as compile time polymorphism.


template <typename T>


int size_in_bits(const T& a)
{
	return sizeof(a) * 8;
}

int main()
{
	cout << size_in_bits(12) << endl;
	cout << size_in_bits('a') << endl;
	cout << size_in_bits("Hello") << endl;
	cout << size_in_bits(12.1f) << endl;
	cout << size_in_bits(12.1) << endl;

	return 0;

}
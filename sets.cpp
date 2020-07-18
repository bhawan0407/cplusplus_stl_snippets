#include <iostream>
#include <set>
#include <unordered_set>

using namespace std;

template<typename T>
void print(const T& st)
{
	cout << "Contents of set: { ";

	for(const int& num: st)
	{
		cout << num << " ";
	}

	cout << "}" << endl;
}

int main()
{
	set<int> set1;
	multiset<int> set2;
	unordered_set<int> set3;
	unordered_multiset<int> set4;

	int value = 0;

	cout << "Inserting..." << endl;

	while(value >= 0)
	{
		cout << "Enter number: ";
		cin >> value;

		if(value >= 0)
		{
			set1.insert(value);
			set2.insert(value);
			set3.insert(value);
			set4.insert(value);
		}
	}

	print(set1);
	print(set2);
	print(set3);
	print(set4);

	value = 0;

	cout << "Removing..." << endl;

	while(value >= 0)
	{
		cout << "Enter number: ";
		cin >> value;

		if(value >= 0)
		{
			// removing by value
			set1.erase(value);
			set2.erase(value);
			set3.erase(value);
			set4.erase(value);
		}
	}

	print(set1);
	print(set2);
	print(set3);
	print(set4);

	return 0;
}
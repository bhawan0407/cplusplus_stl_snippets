#include <iostream>
#include <list>

using namespace std;

// Common Practices:
// const qualifier is a promise that function will not modify the list
// passing it by reference to avoid copying the whole list



void print(const list<int>& lis)
{
	cout << "List Content: { ";

	for(const int& num : lis)
	{
		cout << num << " ";
	}

	cout << "}" << endl; 
}

int main()
{
	list<int> numbers;

	int value = 0;

	cout << "Pushing back" << endl;

	while(value >= 0)
	{
		cout << "Enter value: ";
		cin >> value;

		if(value >= 0)
		{
			numbers.push_back(value);
		}
	}

	print(numbers);


	value = 0;

	cout << "Pushing front" << endl;

	while(value >= 0)
	{
		cout << "Enter value: ";
		cin >> value;

		if(value >= 0)
		{
			numbers.push_front(value);
			// we can also use insert method
			//numbers.insert(numbers.begin(), value);
		}
	}

	print(numbers);

	return 0;
}
#include <iostream>
#include <vector>

using namespace std;

// Common Practices:
// const qualifier is a promise that function will not modify the vector
// passing it by reference to avoid copying the whole vector



void print(const vector<int>& vec)
{
	cout << "Vector Content: { ";

	for(const int& num : vec)
	{
		cout << num << " ";
	}

	cout << "}" << endl; 
}

int main()
{
	vector<int> numbers;

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
			numbers.insert(numbers.begin(), value);
		}
	}

	print(numbers);


	int index = 0;

	cout << "Inserting by Index" << endl;

	while(index >= 0)
	{
		cout << "Enter index: ";
		cin >> index;

		if(index >= 0)
		{
			cout << "Enter value: ";
			cin >> value;
			numbers.insert(numbers.begin() + index, value);
		}
	}

	print(numbers);


	index = 0;

	cout << "Modifying by Index" << endl;

	while(index >= 0)
	{
		cout << "Enter index: ";
		cin >> index;

		if(index >= 0)
		{
			cout << "Enter new value: ";
			cin >> value;
			numbers[index] =  value;
		}
	}

	print(numbers);


	return 0;
}
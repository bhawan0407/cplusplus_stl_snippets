#include <iostream>
#include <deque>

using namespace std;

// Common Practices:
// const qualifier is a promise that function will not modify the deque
// passing it by reference to avoid copying the whole deque



void print(const deque<int>& dq)
{
	cout << "Deque Content: { ";

	for(const int& num : dq)
	{
		cout << num << " ";
	}

	cout << "}" << endl; 
}

int main()
{
	deque<int> numbers;

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
		}
	}

	print(numbers);

	return 0;
}
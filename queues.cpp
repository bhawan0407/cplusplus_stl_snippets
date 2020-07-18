#include <iostream>
#include <queue>

using namespace std;

// Common Practices:
// const qualifier is a promise that function will not modify the queue
// passing it by reference to avoid copying the whole queue



void print(queue<int>& q)
{
	cout << "Queue Content: { ";

	while(!q.empty())
	{
		cout << q.front() << " ";
		q.pop();
	}

	cout << "}" << endl; 
}

int main()
{
	queue<int> numbers;

	int value = 0;

	cout << "Pushing..." << endl;

	while(value >= 0)
	{
		cout << "Enter value: ";
		cin >> value;

		if(value >= 0)
		{
			numbers.push(value);
		}
	}

	print(numbers);

	return 0;
}
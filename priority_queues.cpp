#include <iostream>
#include <queue>

using namespace std;

// Common Practices:
// const qualifier is a promise that function will not modify the priority queue
// passing it by reference to avoid copying the whole priority queue



void print(priority_queue<int>& pq)
{
	cout << "Priority Queue Content: { ";

	while(!pq.empty())
	{
		cout << pq.top() << " ";
		pq.pop();
	}

	cout << "}" << endl; 
}

int main()
{
	priority_queue<int> numbers;

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
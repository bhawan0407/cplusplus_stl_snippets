#include <iostream>
#include <stack>

using namespace std;

// Common Practices:
// const qualifier is a promise that function will not modify the stack
// passing it by reference to avoid copying the whole stack



void print(stack<int>& st)
{
	cout << "Stack Content: { ";

	while(!st.empty())
	{
		cout << st.top() << " ";
		st.pop();
	}

	cout << "}" << endl; 
}

int main()
{
	stack<int> numbers;

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
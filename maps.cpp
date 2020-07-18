#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

void print(const map<int, string>& mp)
{
	cout << "Contents of map: { ";

	for(auto& it: mp)
	{
		cout << it.first << " -> "  << it.second << " ";
	}

	cout << "}" << endl;
}

void print(const multimap<int, string>& mp)
{
	cout << "Contents of multi map: { ";

	for(auto& it: mp)
	{
		cout << it.first << " -> "  << it.second << " ";
	}

	cout << "}" << endl;
}

void print(const unordered_map<int, string>& mp)
{
	cout << "Contents of unordered map: { ";

	for(auto& it: mp)
	{
		cout << it.first << " -> "  << it.second << " ";
	}

	cout << "}" << endl;
}

void print(const unordered_multimap<int, string>& mp)
{
	cout << "Contents of unordered multi map: { ";

	for(auto& it: mp)
	{
		cout << it.first << " -> "  << it.second << " ";
	}

	cout << "}" << endl;
}


int main()
{
	map<int, string> mp1;
	multimap<int, string> mp2;
	unordered_map<int, string> mp3;
	unordered_multimap<int, string> mp4;

	int value = 0;
	string str;

	cout << "Inserting..." << endl;

	while(value >= 0)
	{
		cout << "Enter number: ";
		cin >> value;

		if(value >= 0)
		{
			cout << "Enter string: ";
			cin >> str;

			mp1.insert(pair<int, string>(value, str));
			mp2.insert(pair<int, string>(value, str));
			mp3.insert(pair<int, string>(value, str));
			mp4.insert(pair<int, string>(value, str));
		}
	}

	print(mp1);
	print(mp2);
	print(mp3);
	print(mp4);

	value = 0;

	cout << "Removing..." << endl;

	while(value >= 0)
	{
		cout << "Enter number: ";
		cin >> value;

		if(value >= 0)
		{
			// removing by value
			mp1.erase(value);
			mp2.erase(value);
			mp3.erase(value);
			mp4.erase(value);
		}
	}

	print(mp1);
	print(mp2);
	print(mp3);
	print(mp4);

	return 0;
}
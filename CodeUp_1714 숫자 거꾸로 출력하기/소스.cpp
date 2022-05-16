#include <iostream>
#include <stack>
using namespace std;

int main()
{
	string num;
	stack<char> s;
	cin >> num;
	for (int i = 0; num[i]; i++)
		s.push(num[i]);
	while (s.size())
	{
		cout << s.top();
		s.pop();
	}
	return 0;
}
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> s;
		string s1="666666";
		for (int i = 1; i <= 5; i++)
		{
			s1[i] = s[5 + i];
		}
		cout << s1<<endl;
	}
}

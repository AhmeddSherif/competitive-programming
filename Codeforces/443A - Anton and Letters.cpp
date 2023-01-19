//Solution by: Ahmed Sherif
//Date/Time: 02/11/2022 17:39
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/443/A
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include <iostream>
#include <set>
#include <string>


using namespace std;

int main()
{
	set<char> s;
	string str; getline(cin, str);
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] != '{' && str[i] != '}' && str[i] != ',' && str[i] != ' ')
		{
			s.insert(str[i]);
		}
	}

	cout << s.size();
}
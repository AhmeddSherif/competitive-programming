//Solution by: Ahmed Sherif
//Date/Time: 25/03/2023 - 03:10
//Verdict: Accepted
//Problem Link: https://codeforces.com/problemset/problem/26/A
//Profile Link: https://codeforces.com/profile/AhmeddSherif

#include<iostream>

#define lumos ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

bool isPrime(int n)
{
	if (n == 2)
		return true;
	if (n % 2 == 0)
		return false;
	for (int i = 3; i * i <= n; i += 2)
		if (n % i == 0)
			return false;
	return true;
}

bool isAlmostPrime(int n)
{
	
	int ans = 0;
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			if (isPrime(i)) ans++;
			if (i != (n / i))
				if (isPrime(n / i)) ans++;
		}
	}
	return (ans == 2);
}

int main()
{
	lumos;
	int n; cin >> n;
	int ans = 0;
	for (int i = 1; i <= n; i++) // loop from 1 to n inclusive
	{
		if (isAlmostPrime(i)) ans++;
	}
	cout << ans;
	return 0;
}

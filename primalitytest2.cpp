
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
	// Corner case
	if (n <= 1)
		return false;

	// Check from 2 to square root of n
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;

	return true;
}
int main()
{
	isPrime(11) ? cout << " true\n" : cout << " false\n";
	isPrime(15) ? cout << " true\n" : cout << " false\n";
	return 0;
}
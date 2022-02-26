#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int n;
	cin >> n;

	for (int i = 2; i <= sqrt(n); i++)
	{
		while (!(n % i))
		{
			cout << i << "\n";
			n /= i;
		}
	}

	if (n != 1)
		cout << n;
}

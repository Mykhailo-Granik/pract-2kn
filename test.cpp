#include <iostream>
#include <vector>
#include <math.h>


using namespace std;

int main()
{

	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	int value;
	cin >> value;
	int bestIndex = 0;
	for (int i = 1; i < n; ++i)
	{
		int bestDistance = abs(value - a[bestIndex]);
		int currentDistance = abs(value - a[i]);
		if (currentDistance < bestDistance)
		{
			bestIndex = i;
		}
	}
	cout << a[bestIndex] << endl;

}

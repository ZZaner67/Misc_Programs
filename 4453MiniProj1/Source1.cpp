#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double array[10000];
	srand(time(0));
	for (int i = 0;i < 10000;i++)
	{
		array[i] = ((double)rand()) / RAND_MAX;
	}

	for (int j = 0;j < 10000;j++)
	{
		cout << array[j];
	}
	return 0;
}
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	int num;
	cout << "Please type in an integer, then hit the enter key. \n";
	cin >> num;
	cout << "The number entered is " << num << '\n';
	cout << num - 2 << " " << num - 1 << " " << num << " " << num + 1 << " " << num + 2 << '\n';
	system("pause");
	return 0;
}
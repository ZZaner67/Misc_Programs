#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int rsize, lpctrl = 0;
	string inname;
	string outname;
	ifstream infile;
	ofstream outfile;

	cout << "Please name the input file: \n";
	cin >> inname;
	infile.open(inname);
	cout << "\nPlease name the output file: \n";
	cin >> outname;
	outfile.open(outname);

	while (!infile.eof())
	{
		infile >> rsize;
		int** a = new int* [rsize];
		for (int i = 0; i < rsize; ++i)
		{
			a[i] = new int[2];
		};
		for (int i = 0; i < rsize; ++i)
		{
			for (int j = 0; j < 2; ++j)
			{
				infile >> a[i][j];
				cout << a[i][j] << " ";
			};
		};
		
	};

};




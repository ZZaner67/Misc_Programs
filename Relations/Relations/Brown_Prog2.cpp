/*
	Zane Brown
	4/28/2022
	Cathrine Stringfellow
	Program 2
	The purpose of this program was to see if a set of ordered pairs
	were a function, one-to-one, onto, or even one-to-one correspondance.


*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int rsize, lpctrl, chkr=1,chkr2=1,chkr3=1;
	string inname;
	string outname;
	ifstream infile;
	ofstream outfile;
	//My input file and output file statements
	cout << "Please name the input file: \n";
	cin >> inname;
	infile.open(inname);
	cout << "\nPlease name the output file: \n";
	cin >> outname;
	outfile.open(outname);

	outfile << "Zane Brown\n" << "Program 2: Relations and functions\n" << '\n';

	infile >> lpctrl;
	//the beginning of the for loops
	//spent all night trying to figure out how to get these to work
	//couldn't find out even after hours of trying.
	for (int q = 0; q < lpctrl; ++q)
	{
		infile >> rsize;
		rsize = rsize + 1;
		bool oto = false, ont = false, croto = false, func = false;

		vector<int> preim(rsize, -1);
		vector<int> postim(rsize, -1);
		vector<int> index(rsize, -1);
		outfile << "Relation " << (++q) << ": ";
		--q;

		for (int w = 1; w < rsize; ++w)
		{
			infile >> index[w];
			infile >> preim[w];
		}
		for (int e = 1; e < rsize; ++e)
		{
			if (postim[index[e]] == -1)
			{
				postim[index[e]] = preim[preim[e]];
			}
			else if (postim[index[e]] != -1)
			{
				chkr = 0;
			}
			else if (postim[index[e]] == preim[preim[e]])
			{

			}
		}
		for (int r = 1; r < rsize; ++r)
		{
			outfile << "(" << index[r] << "," << preim[r] << "), ";
		}
		if (chkr == 1)
		{
			outfile << " is a function,";
		}
		for (int y = 1; y < rsize; ++y)
		{
			for (int u = 1; u < rsize; ++u)
			{
				if (postim[y] == postim[u])
				{
					chkr3 = 0;
				}
				if (preim[y] == preim[u])
				{
					chkr2 = 0;
				}
			}
		}
		if (chkr2 == 1)
		{
			outfile << " is one-to-one";
		}
		if (chkr3 == 1)
		{
			outfile << " is onto";
		}

		outfile << endl << endl;
	};
	
	return 0;
};


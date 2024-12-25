#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

/*	Zane Brown
	3/29/22
	Cathrine Stringfellow
	Boundry Fill Program
	By using a dynamically allocated array along with a group of if statements
  this program aims to fill in the interior of an array without going past the boundries*/

  //The function that fills the array
void boundryFill(int lvl, int mxrw, int mxcl, int posy, int posx, int** a);
//The output function, sends data to on output text of the user's choice.
void boundryShow(ofstream& outfile, int mxrw, int mxcl, int mnum, int** a);

//The main function (Where no so much magic happens)
int main()
{
	//Where the output and input files are opened
	string txtnm;
	string indoc;
	cout << "Enter input file name: ";
	cin >> indoc;
	cout << "Enter output file name: ";
	cin >> txtnm;
	ifstream infile;
	ofstream outfile;
	infile.open(indoc);
	outfile.open(txtnm);

	//Initial variables, most read from a data file.
	int mnum, lpcnt = 0;
	int lvl = 0;
	int rwnum, clmnum;
	int srtrw, srtclm;
	infile >> mnum;

	outfile << "Zane Brown\n";
	outfile << "Program 3 Boundry Fill\n" << '\n';

	while (mnum > 0)
	{
		lpcnt++;
		infile >> rwnum >> clmnum;
		infile >> srtrw >> srtclm;
		int** a = new int* [rwnum];
		for (int i = 0; i < rwnum; ++i)
		{
			a[i] = new int[clmnum];
		};
		for (int i = 0; i < rwnum; ++i)
		{
			for (int j = 0; j < clmnum; ++j)
			{
				infile >> a[i][j];
			};
		};
		boundryFill(lvl, rwnum, clmnum, srtrw, srtclm, a);
		boundryShow(outfile, rwnum, clmnum, lpcnt, a);
		for (int i = 0; i < rwnum; ++i)
		{
			delete[] a[i];
		};
		delete[] a;
		mnum--;
	};
	infile.close();
	outfile.close();
};

void boundryShow(ofstream& outfile, int mxrw, int mxcl, int mnum, int** a)
{

	outfile << "Filled Matrix " << mnum << '\n';
	for (int i = 0; i < mxrw; i++)
	{
		for (int j = 0; j < mxcl; j++)
		{
			outfile << a[i][j] << setw(3);
		};
		outfile << '\n';
	};
	outfile << '\n';
};

void boundryFill(int lvl, int mxrw, int mxcl, int posy, int posx, int** a)
{
	if (posy < mxrw && posy > 0 && posx < mxcl && posx > 0)
	{
		if (a[posy][posx] != -1)
		{
			if (a[posy][posx] == 0)
			{
				lvl = lvl + 1;
				a[posy][posx] = lvl;
				if (posx < mxcl)
				{
					boundryFill(lvl, mxrw, mxcl, posy, posx + 1, a);
				}
				if (posy < mxrw)
				{
					boundryFill(lvl, mxrw, mxcl, posy + 1, posx, a);
				}
				if (posx > 0)
				{
					boundryFill(lvl, mxrw, mxcl, posy, posx - 1, a);
				};
				if (posy > 0)
				{
					boundryFill(lvl, mxrw, mxcl, posy - 1, posx, a);
				};
			};
		};
	};
};
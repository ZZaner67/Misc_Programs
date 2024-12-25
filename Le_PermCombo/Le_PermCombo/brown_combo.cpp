#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
Zane Brown
4/24/22
Cathrine Stringfellow
Permutation and Combination Calculator

This program takes a input file inclusding a letter and two digits
which are identified by the letter to either be a permutation or
a combination pair.
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

// Function Prototypes
unsigned long long infac(char type, long nnum, long rnum);
unsigned long long permfnc(long nnum, long rnum);
unsigned long long combfnc(long nnum, long rnum);
// Had to use usigned long long's due to the size
// of one of the permutations being larger than an int or long

int main()
{
	ifstream infile;
	ofstream outfile;
	string infl;
	string outfl;
	char type;
	long nnum, rnum;
	unsigned long long clnm;

	cout << "Enter infile name: ";
	cin >> infl;
	cout << "Enter outfile name: ";
	cin >> outfl;
	// Where the input and output file names are asked.

	infile.open(infl);
	outfile.open(outfl);

	outfile << "Zane Brown\n" << "CMPS 2433 Program 4\n";

	while (!infile.eof()) //This while loop reads the entire file until the end.
	{
		infile >> type >> nnum >> rnum;

		clnm = infac(type, nnum, rnum);

		outfile << type << setw(2) << "(" << nnum << ", ";
		outfile << rnum << ")" << setw(2) << "=" << setw(25) << clnm << '\n';
	}
	
	infile.close();
	outfile.close();
	return 0;
}

unsigned long long infac(char type, long nnum, long rnum)
{ // This function determines if the set is a Permutation or Combo
	unsigned long long calnum = 0;

	if (type == 'P')
		calnum = permfnc(nnum, rnum);
	else
		calnum = combfnc(nnum, rnum);
	
	return calnum;
};

unsigned long long permfnc(long nnum, long rnum)
{ //This function calculates a Permutation
	unsigned long long  tpnm = 1, btnm = 1;
	unsigned long long fnlnm;
	rnum = nnum - rnum;
	//These two loops calculate a factorial for top and bottom
	for (int i = 1; i <= nnum; ++i)
	{
		tpnm *= i;
	}
	for (int i = 1; i <= rnum; ++i)
	{
		btnm *= i;
	}

	fnlnm = tpnm / btnm;

	return fnlnm;
};

unsigned long long combfnc(long nnum, long rnum)
{//This function calculates a Combination
	unsigned long long  tpnm = 1, btnm = 1, btnm2 = 1, rnum2 = rnum;
	unsigned long long fnlnm;
	rnum = nnum - rnum;
	// These three loops calculate the factorials for the formula.
	for (int i = 1; i <= nnum; ++i)
	{
		tpnm *= i;
	}
	for (int i = 1; i <= rnum; ++i)
	{
		btnm *= i;
	}
	for (int i = 1; i <= rnum2; ++i)
	{
		btnm2 *= i;
	}

	btnm = btnm * btnm2;
	fnlnm = tpnm / btnm;

	return fnlnm;
};
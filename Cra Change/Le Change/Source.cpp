// Zane Brown
// Money Breakdown/Le Change
// 1044-202 CMPS 1
// 2/27/2020
// This program takes a set amount of money from the user
// and breaks down the money into seperate dollars and coins.

#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
	int count;
	ofstream outfile;
	outfile.open("output.txt");
	/* This is where the values are set as either double or
	 integer.*/
	double orgamt;
	int cvamt, dlrbills, hlfdlrs,
	qrtrs, dimes, nckls, pnns, change1;

	cout << "Student: Zane Brown" << '\n';
	cout << '\n';
	cout << fixed << setprecision(2);
	outfile << "Student: Zane Brown" << '\n';
	outfile << '\n';
	outfile << fixed << setprecision(2);

	count = 1;
	while (count <= 11)
	{	// Prompts user for the amount of money for breakdown.
		cout << "Please enter the monetary amount for breakdown. "
		<< "In 0.00 format please." << '\n';
		cin >> orgamt;
		// The equations used for change breakdown.
		cvamt = orgamt * 1000 / 10;
		dlrbills = orgamt;
		change1 = cvamt % 100;
		hlfdlrs = change1 / 50;
		change1 = change1 % 50;
		qrtrs = change1 / 25;
		change1 = change1 % 25;
		dimes = change1 / 10;
		change1 = change1 % 10;
		nckls = change1 / 5;
		pnns = change1 % 5;
		// Sends the breakdown of the change to the command prompt.
		cout << "Total amount is $ " << orgamt << '\n';
		cout << "	Dollar Bills" << setw(10) << dlrbills << '\n';
		cout << "	Half Dollars" << setw(10) << hlfdlrs << '\n';
		cout << "	Quarters    " << setw(10) << qrtrs << '\n';
		cout << "	Dimes       " << setw(10) << dimes << '\n';
		cout << "	Nickels     " << setw(10) << nckls << '\n';
		cout << "	Pennies     " << setw(10) << pnns << '\n';
		cout << '\n';
		/* Sends the breakdown of the change to an outfile.
		Begins porting to outfile. */
		outfile << "Total amount is $ " << orgamt << '\n';
		outfile << "	Dollar Bills" << setw(10) << dlrbills << '\n';
		outfile << "	Half Dollars" << setw(10) << hlfdlrs << '\n';
		outfile << "	Quarters    " << setw(10) << qrtrs << '\n';
		outfile << "	Dimes       " << setw(10) << dimes << '\n';
		outfile << "	Nickels     " << setw(10) << nckls << '\n';
		outfile << "	Pennies     " << setw(10) << pnns << '\n';
		outfile << '\n';

		system("pause");
		count = count + 1;
	}
	outfile.close();
	return 0;  // End of the program.
}
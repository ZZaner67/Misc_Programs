#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
	int count;
	// Declarations

	ofstream outfile;
	outfile.open("output.txt");

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
	{	// Statements
		cout << "Please enter the monetary amount for breakdown. "
		<< "In 0.00 format please." << '\n';
		cin >> orgamt;

		cvamt = orgamt * 100;
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

		cout << "Total amount is $ " << orgamt << '\n';
		cout << "	Dollar Bills" << setw(10) << dlrbills << '\n';
		cout << "	Half Dollars" << setw(10) << hlfdlrs << '\n';
		cout << "	Quarters    " << setw(10) << qrtrs << '\n';
		cout << "	Dimes       " << setw(10) << dimes << '\n';
		cout << "	Nickels     " << setw(10) << nckls << '\n';
		cout << "	Pennies     " << setw(10) << pnns << '\n';
		cout << '\n';

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
	return 0;
}
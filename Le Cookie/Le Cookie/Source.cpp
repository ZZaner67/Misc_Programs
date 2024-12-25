// Zane Brown
// Cookie Recipe Adjuster/Le Cookie
// 1044-202 CMPS 1
// 2/18/2020
// This program calculates the amount of ingredients off of a standard recipe for a specified number of cookies desired

#include <iomanip>
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	
	ofstream outfile;
	outfile.open("output.txt");

	// Base recipe ingredient amounts
	double cookdes;
	double basesug = 1.5;
	double baseoat = 0.75;
	double basebutter = 1;
	double baseflr = 2.75;
	double basechc = 1.25;
	double basecin = 0.1;
	double basemlk = 0.5;

	cout << fixed << setprecision(2);
	outfile << fixed << setprecision(2);
	outfile << "Zane Brown" << '\n';
	outfile << '\n';
	
	int number = 1;
	while (number <= 10) // Will calculate required ingredients for cookie amount

	{
		cout << "Please enter the number of cookies desired." << '\n';
		cin >> cookdes; // Promts user for desired cookies
		double rqcook = cookdes / 48;
		cout << "For " << cookdes << " cookies, use this recipe:" << '\n';

		cout << basesug * rqcook << " cups of sugar" << setw(10) << '\n';
		cout << baseoat * rqcook << " cups of oat" << '\n';
		cout << basebutter * rqcook << " cups of butter" << '\n';
		cout << baseflr * rqcook << " cups of flour" << '\n';
		cout << basechc * rqcook << " cups of chocolate chips" << '\n';
		cout << basecin * rqcook << " cups of cinnamon" << '\n';
		cout << basemlk * rqcook << " cups of milk" << '\n';
		cout << '\n';

		// Begins porting to outfile
		outfile << "For " << cookdes << " cookies, use this recipe:" << '\n';

		outfile << basesug * rqcook << " cups of sugar" << '\n';
		outfile << baseoat * rqcook << " cups of oat" << '\n';
		outfile << basebutter * rqcook << " cups of butter" << '\n';
		outfile << baseflr * rqcook << " cups of flour" << '\n'; '\n';
		outfile << basechc * rqcook << " cups of chocolate chips" << '\n';
		outfile << basecin * rqcook << " cups of cinnamon" << '\n';
		outfile << basemlk * rqcook << " cups of milk" << '\n';
		outfile << '\n';

		number = number + 1;
		system("pause"); // End of While loop
	}

	outfile.close();
	return 0; // End of the program
}
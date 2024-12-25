// Zane Brown
// If/Else Lab 5
// 1044-202 CMPS 1
// 2/27/2020
// Dr. Halverston
// Practicing the use of If/Else statements

#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
int main()
{
	double totpc, discnt, newpc;
	cout << fixed << setprecision(2);
	ofstream outfile;
	outfile.open("output.txt");

	// Begining of Loop
	int count = 1;
	while (count <= 6)
	{
		count = count + 1;
		cout << "Please enter intended purchase price. In 0.00 Format Please." << '\n';
		cin >> totpc;
		cout << '\n';
		if (totpc >= 1000)
		{ // Begining of if statement and start of the calculations of the discounts.
			discnt = totpc * 0.50;
			newpc = totpc - discnt;
			cout << "Total Purchase  $ " << setw(7) << totpc << '\n';
			cout << "Discount        $ " << setw(7) << discnt << '\n';
			cout << "-------------------------" << '\n';
			cout << "New Price       $ " << setw(7) << newpc << '\n';
			cout << '\n';

			outfile << "Total Purchase  $ " << setw(7) << totpc << '\n';
			outfile << "Discount        $ " << setw(7) << discnt << '\n';
			outfile << "-------------------------" << '\n';
			outfile << "New Price       $ " << setw(7) << newpc << '\n';
			outfile << '\n';
		}
		else if (totpc >= 500)
		{
			discnt = totpc * 0.4;
			newpc = totpc - discnt;
			cout << "Total Purchase  $ " << setw(7) << totpc << '\n';
			cout << "Discount        $ " << setw(7) << discnt << '\n';
			cout << "-------------------------" << '\n';
			cout << "New Price       $ " << setw(7) << newpc << '\n';
			cout << '\n';

			outfile << "Total Purchase  $ " << setw(7) << totpc << '\n';
			outfile << "Discount        $ " << setw(7) << discnt << '\n';
			outfile << "-------------------------" << '\n';
			outfile << "New Price       $ " << setw(7) << newpc << '\n';
			outfile << '\n';
		}
		else if (totpc >= 250)
		{
			discnt = totpc * 0.3;
			newpc = totpc - discnt;
			cout << "Total Purchase  $ " << setw(7) << totpc << '\n';
			cout << "Discount        $ " << setw(7) << discnt << '\n';
			cout << "-------------------------" << '\n';
			cout << "New Price       $ " << setw(7) << newpc << '\n';
			cout << '\n';

			outfile << "Total Purchase  $ " << setw(7) << totpc << '\n';
			outfile << "Discount        $ " << setw(7) << discnt << '\n';
			outfile << "-------------------------" << '\n';
			outfile << "New Price       $ " << setw(7) << newpc << '\n';
			outfile << '\n';
		}
		else if (totpc >= 100)
		{
			discnt = totpc * 0.2;
			newpc = totpc - discnt;
			cout << "Total Purchase  $ " << setw(7) << totpc << '\n';
			cout << "Discount        $ " << setw(7) << discnt << '\n';
			cout << "-------------------------" << '\n';
			cout << "New Price       $ " << setw(7) << newpc << '\n';
			cout << '\n';

			outfile << "Total Purchase  $ " << setw(7) << totpc << '\n';
			outfile << "Discount        $ " << setw(7) << discnt << '\n';
			outfile << "-------------------------" << '\n';
			outfile << "New Price       $ " << setw(7) << newpc << '\n';
			outfile << '\n';
		}
		else if (totpc < 100)
		{
			discnt = totpc * 0.1;
			newpc = totpc - discnt;
			cout << "Total Purchase  $ " << setw(7) << totpc << '\n';
			cout << "Discount        $ " << setw(7) << discnt << '\n';
			cout << "-------------------------" << '\n';
			cout << "New Price       $ " << setw(7) << newpc << '\n';
			cout << '\n';

			outfile << "Total Purchase  $ " << setw(7) << totpc << '\n';
			outfile << "Discount        $ " << setw(7) << discnt << '\n';
			outfile << "-------------------------" << '\n';
			outfile << "New Price       $ " << setw(7) << newpc << '\n';
			outfile << '\n';
		}
		
	}
	return 0;
}
/* Zane Brown
   Bank Charges/Le Bank
   1044-202 CMPS 1
   4/8/2020
   This program takes data from a file and
   determines the account type and then calculates
   the monthly fee along with a check fee.*/
#include<fstream>
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	ifstream infile;
	ofstream outfile;
	infile.open("input.txt");
	outfile.open("output.txt");
	int chkmt;
	double chkf, ttl, pmnth = 5.00, bmnth = 25.00;
	char accnt;
	string accnttp;
	outfile << "Student: Zane Brown\n";
	outfile << '\n';
	outfile << "Account type   " << "Monthly   " << "Checks   ";
	outfile << "Check Fee      " << "Total\n";
	outfile << "-------------------------------------------------------------\n";
	outfile << fixed << setprecision(2);
	while (infile >> accnt >> chkmt)
	{ // The while loop pulls the account type and the check amount
	  // from the input data
		switch (accnt)
		{
			case 'B': case 'b':
			{ // This switch statement is for the Buisinees accounts
				switch (chkmt / 10)
				{
					case 0: case 1:
					{
						chkf = chkmt * 0.10;
						ttl = chkf + bmnth;
					}
					break;
					case 2: case 3:
					{
						chkf = chkmt * 0.08;
						ttl = chkf + bmnth;
					}
					break;
					case 4: case 5:
					{
						chkf = chkmt * 0.06;
						ttl = chkf + bmnth;
					}
					break;
					default:
					{
						chkf = chkmt * 0.04;
						ttl = chkf + bmnth;
					}
				}
				accnttp = "Business";
			}	outfile << setw(8) << accnttp << "       $";
				outfile << setw(5) << bmnth << setw(8) << chkmt;
				outfile << "      $ " << setw(5) << chkf << "     $  ";
				outfile << setw(5) << ttl << '\n';
			break;
			case 'P': case 'p':
			{ // This switch statement is for personal accounts.
				switch (chkmt / 10)
				{
					case 0: case 1: case 2:
					{
						chkf = chkmt * 0.05;
						ttl = chkf + pmnth;
					}
					break;
					case 3: case 4:
					{
						chkf = chkmt * 0.04;
						ttl = chkf + pmnth;
					}
					break;
					case 5: case 6:
					{
						chkf = chkmt * 0.03;
						ttl = chkf + pmnth;
					}
					break;
					default:
					{
						chkf = chkmt * 0.02;
						ttl = chkf + pmnth;
					}
				}
				accnttp = "Personal";
			}	outfile << setw(8) << accnttp << "       $";
				outfile << setw(5) << pmnth << setw(8) << chkmt;
				outfile << "      $ " << setw(5) << chkf << "     $  ";
				outfile << setw(5) << ttl << '\n';
		}
	}

	infile.close();
	outfile.close();
	return 0;
}
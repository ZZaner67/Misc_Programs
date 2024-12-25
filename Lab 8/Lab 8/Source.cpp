/*Zane Brown
  Dr. Halverston
  3/27/2020
  For Loop Lap/Le Lab 6
  Using a For loop to 
  create an accumulating table*/
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
	ofstream outfile;
	outfile.open("output.txt");
	outfile << "Student: Zane Brown\n" << '\n';
	int row, col, sum = 0;
	// Here is where the Row and Column variables are stated
	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{ // Here is where the Rows and
		  // Columns are turned into a table
			sum += row + col;
			// This is the equation that sums up
			// all of the numbers in the rows and columns
			outfile << setw(4) << sum;
		}
		outfile << '\n';
	}
	outfile << '\n';
	outfile << "The Sum is: " << sum << '\n';
	
	outfile.close();
	return 0;

}
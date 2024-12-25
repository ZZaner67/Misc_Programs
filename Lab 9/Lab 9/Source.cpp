/* Zane Brown
   Lab 9A/Function Calling
   4/10/2020
   Dr. Halverson
   This program uses the FindMax function to find
   the largest integer in a set.*/
#include <iostream>
#include <fstream>
using namespace std;
int FindMax(int, int, int);
int main()
{
	ofstream outfile;
	outfile.open("output.txt");
	outfile << "Student: Zane Brown\n";
	int Biggest;
	Biggest = FindMax(10, 13, 7);
	outfile << Biggest << '\n';
	outfile.close();
	return 0;
} // End of main
int FindMax(int N1, int N2, int N3)
{// The start of FindMax Function
	int Big;

	if (N1 >= N2 && N1 >= N3)
		Big= N1; // Here is where the largest
	else if (N2 >= N1 && N2 >= N3) // number is found
		Big = N2;
	else
		Big = N3;
	return Big;
}
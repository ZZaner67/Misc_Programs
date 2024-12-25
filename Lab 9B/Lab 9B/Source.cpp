/* Zane Brown
   Dr. Halverson
   5/8/2020
   Lab 9B
   Using functions to form a calculator*/
#include<iomanip>
#include<fstream>
#include <iostream>
using namespace std;

// Where the calc functions are prototyped
int ADD(int num1, int num2);
int SUB(int num1, int num2);
int MUL(int num1, int num2);
double DIV(double num1, double num2);
double PRNT(double numans);
void CHC();

int main()
{
	CHC();
	return 0;
}

void CHC()
{
	int lchc;
	int num1, num2;
	double numans = 0;
	cout << "Please enter two integers: \n";
	cin >> num1 >> num2;
	cout << "Please pick a type of operation: \n";
	cout << "1: Addition\n";
	cout << "2. Subtraction\n";
	cout << "3. Multiplication\n";
	cout << "4. Division\n";
	cin >> lchc;
	// A switch statement selects the type 
	// of calculation that the user desires
	switch (lchc)
	{
	case 1: numans = ADD(num1, num2);
		break;
	case 2: numans = SUB(num1, num2);
		break;
	case 3: numans = MUL(num1, num2);
		break;
	case 4: numans = DIV(num1, num2);
		break;
	default: cout << "Invalid Choice.\n";
	}
	PRNT(numans);
}
int ADD(int num1, int num2)
{
	int numans;
	numans = num1 + num2;
	return numans;
}
int SUB(int num1, int num2)
{
	int numans;
	numans = num1 - num2;
	return numans;
}int MUL(int num1, int num2)
{
	int numans;
	numans = num1 * num2;
	return numans;
}double DIV(double num1, double num2)
{
	double numans;
	numans = num1 / num2;
	return numans;
}double PRNT(double numans)
{
	ofstream outfile;
	outfile.open("output.txt");
	outfile << "Student: Zane Brown\n" << '\n';
	double numprnt = numans;
	outfile << "Your Anwser is: " << numprnt << '\n';
	outfile.close();
	return 0;
}
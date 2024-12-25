#include <iostream>

using namespace std;

//Function Prototypes
int Summation(int sum1);
int Exponent(int base1, int expo1);
int Product(int prod1);

int main()
{

	int sum, base, expo, prod;	// Variable Initialization
	cout << "Please enter a positive integer: ";
	cin >> sum;
	cout << "Please Enter a Postive integer for a Base: ";
	cin >> base;
	cout << "Please enter a Postive integer for a Exponent: ";
	cin >> expo;
	cout << "Please enter a positive integer: ";
	cin >> prod;

	//Function Calls
	sum = Summation(sum);
	base = Exponent(base, expo);
	prod = Product(prod);

	//All Outputs
	cout << "The sum of all odd integers: ";
	cout << sum << '\n';

	cout << "The product from the exponent and base: ";
	cout << base << '\n';
	
	cout << "The product of all even integers: ";
	cout << prod << '\n';
	

	//End of Program
	return 0;
};

//Function Definitions

int Summation(int sum1) //Sum Function adds all Odds below the givin
{						//number and above 1.  Recursive
	if (sum1 > 0)
	{
		if (sum1 != 1)
		{
			if (sum1 % 2 == 0)
			{
				sum1 = Summation(sum1 - 1);
			}
			else
			{
				sum1 = sum1 + Summation(sum1 - 2);
			}
		}
	}
	return sum1;
}

int Exponent(int base1, int expo1) //Calculates an exponent and Base. Recursive
{
	if (expo1 > 1)
	{
		expo1 = expo1 - 1;
		base1 = base1 * Exponent(base1, expo1);
	}
	return base1;
}

int Product(int prod1) //Suppose to calculate a product
{						//From all even digits between a user defined
	if (prod1 > 0)		// digit and one. Could not get to work
	{					//only got giant numbers no where close to expected answer.
		if (prod1 % 2 == 0)
		{
			prod1 = prod1 * Product(prod1 - 2);
		}
		else
		{
			prod1 = Product(prod1 - 2);
		}
		return prod1;
	}
}
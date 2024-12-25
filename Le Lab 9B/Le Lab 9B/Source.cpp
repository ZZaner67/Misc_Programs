#include <iostream>
using namespace std;

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);
int prnt(int numans);
void chc();

int main()
{
	chc();
	return 0;
}

void chc()
{
	int lchc;
	int num1, num2, numans;
	cout << "Please enter two integers: \n";
	cin >> num1 >> num2;
	cout << "Please pick a type of operation: \n";
	cout << "1: Addition\n";
	cout << "2. Subtraction\n";
	cout << "3. Multiplication\n";
	cout << "4. Division\n";
	cin >> lchc;
	switch (lchc)
	{
		case 1: numans = add(num1, num2);
			break;
		case 2: numans = sub(num1, num2);
			break;
		case 3: numans = mul(num1, num2);
			break;
		case 4: numans = div(num1, num2);
			break;
		default: cout << "Invalid Choice.\n";
	}
	prnt(numans);
}
int add(int num1, int num2)
{
	int numans;
	numans = num1 + num2;
	return numans;
}
int sub(int num1, int num2)
{
	int numans;
	numans = num1 - num2;
	return numans;
}int mul(int num1, int num2)
{
	int numans;
	numans = num1 * num2;
	return numans;
}int div(int num1, int num2)
{
	int numans;
	numans = num1 / num2;
	return numans;
}int prnt(int numans)
{
	int numprnt = numans;
	cout << "Your Anwser is: " << numprnt << '\n';
	return 0;
}